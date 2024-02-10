//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> res;
    unordered_map<int, int> mp;
    void solve(int i, int n){
        if(i == n) return;
        int a = 0;
        a = res.back() - i;
        if(a > 0){
            if(mp.find(a) == mp.end()){
                mp[a]++;
                res.emplace_back(a);
            } 
            else{
                a = res.back() + i;
                mp[a]++;
                res.emplace_back(a);
            }
        }
        else{
            a = res.back() + i;
            mp[a]++;
            res.emplace_back(a);
        }
        solve(i+1, n);
    }
    vector<int> recamanSequence(int n){
        // code here
        res.emplace_back(0);
        solve(1, n);
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
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends