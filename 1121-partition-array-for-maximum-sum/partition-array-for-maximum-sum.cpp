class Solution {
public:
    int solve(int ind, vector<int>& arr, int k, int n, vector<int> &dp) {
        if (ind == n) return 0;
        if(dp[ind] != -1) return dp[ind];
        int len = 0, maxi = INT_MIN, maxAns = INT_MIN;
        for (int j = ind; j < min(ind + k, n); j++) {
            len++;
            maxi = max(maxi, arr[j]);
            int sum = len * maxi + solve(j + 1, arr, k, n, dp);
            maxAns = max(maxAns, sum);
        }
        return dp[ind] = maxAns;
    }

    int maxSumAfterPartitioning(std::vector<int>& arr, int k) {
        vector<int> dp(arr.size(), -1);
        return solve(0, arr, k, arr.size(), dp);
    }
};
