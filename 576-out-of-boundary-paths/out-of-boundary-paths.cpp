class Solution {
public:
    int mod = 1e9 + 7;
    // int dp[51][51][51];
    int solve(int row, int col, int tar, int M, int N, vector<vector<vector<int>>> &dp){
        if(row < 0 or row >= M or col < 0 or col >= N) return 1;
        if(tar<=0)  return 0;
        if(dp[row][col][tar] != -1) return dp[row][col][tar];
        long long up = solve(row-1, col, tar -1, M, N, dp);
        long long down = solve(row+1, col, tar -1, M, N, dp);
        long long left = solve(row, col-1, tar -1, M, N, dp);
        long long right = solve(row, col+1, tar -1, M, N, dp);
        return dp[row][col][tar] = (((up + down) %mod) +(right + left)%mod)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>>dp(51, vector<vector<int>>(51, vector<int>(51, -1)));
        // memet(dp,-1,sizeof(dp));
        return solve(startRow, startColumn, maxMove, m, n, dp);
    }
};