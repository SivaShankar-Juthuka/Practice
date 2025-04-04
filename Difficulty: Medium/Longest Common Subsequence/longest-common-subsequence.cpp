//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
        if(i >= s1.size() || j >= s2.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(s1[i] == s2[j]) return dp[i][j] = 1 + solve(s1,s2,i+1,j+1,dp);
        else{
            return dp[i][j] = 0+max(solve(s1,s2,i+1,j,dp),solve(s1,s2,i,j+1,dp));
        }
    }
    int lcs(string &s1, string &s2) {
        // code here
        vector<vector<int>>dp(s1.size(),vector<int>(s2.size(),-1));
        return solve(s1,s2,0,0,dp);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends