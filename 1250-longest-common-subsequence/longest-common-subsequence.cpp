class Solution {
public:
    int Fun(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
        if(i >= s1.size() || j >= s2.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(s1[i] == s2[j]) return dp[i][j] = 1 + Fun(s1,s2,i+1,j+1,dp);
        else{
            return dp[i][j] = 0+max(Fun(s1,s2,i+1,j,dp),Fun(s1,s2,i,j+1,dp));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),-1));
        return Fun(text1,text2,0,0,dp);
    }
};