//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int>>res;
    void solve(int ind, int n, vector<int>&arr, int tot, vector<int>&tmp){
        if(ind == n){
            if(tot == 0){
                res.push_back(tmp);
            }
            return;
        }
        if(arr[ind] <= tot){
            tmp.emplace_back(arr[ind]);
            solve(ind, n, arr, tot-arr[ind], tmp);
            tmp.pop_back();
        }
        solve(ind+1, n, arr, tot, tmp);
        return;
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        set<int> s(A.begin(), A.end());
        vector<int> v(s.begin(), s.end());
        // for(auto it : v) cout<<it<<" ";
        // cout<<"\n";
        vector<int>tmp;
        solve(0, v.size(), v, B, tmp);
        return res;
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends