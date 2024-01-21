class Solution {
public:
    int solve(int i, vector<int>&nums, vector<int>&dp, int &n){
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];
        int a = nums[i] + solve(i+2, nums, dp, n);
        int b = solve(i+1, nums, dp, n);
        dp[i] = max(a, b);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n =  nums.size();
        vector<int> dp(n, -1);
        int res = solve(0, nums, dp, n);
        return res;
    }
};