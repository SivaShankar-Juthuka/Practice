class Solution {
public:
    int sun(int n, vector<int>&dp){
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = sun(n-1, dp)+sun(n-2, dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+2, -1);
        return sun(n+1, dp);
    }
};