class Solution {
public:
    // int res = INT_MAX;
    int solve(int ind, int sum, vector<int>&v, int vn, vector<vector<int>>&dp){
        if(sum == 0){
            return 0;
        }
        if(ind == vn or sum < 0) return 1e9;
        if(dp[ind][sum] != -1) return dp[ind][sum];
        // sum -= v[ind];
        int a = 1 + solve(ind, sum - v[ind], v, vn, dp);
        int b = solve(ind +1, sum, v, vn, dp);
        return dp[ind][sum] = min(a, b);
    }
    int numSquares(int n) {
        vector<int> v;
        for(int i = 1; i*i <=n; i++) v.emplace_back(i*i);
        vector<vector<int>> dp(v.size()+1, vector<int>(n+1, -1));
        reverse(v.begin(), v.end());
        return solve(0, n, v, v.size(), dp);

    }
};