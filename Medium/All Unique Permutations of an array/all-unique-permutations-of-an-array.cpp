//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void solve(vector<int>&v, int i, int j, set<vector<int>>&s){
        if(i >= j){
            s.insert(v);
            return;
        }
        for(int k = i; k<=j; k++){
            swap(v[i], v[k]);
            solve(v, i+1, j, s);
            swap(v[i], v[k]);
        }
        return;
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        set<vector<int>>s;
        vector<vector<int>>res;
        solve(arr, 0, n - 1, s);
        for(auto i : s){
            res.push_back(i);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends