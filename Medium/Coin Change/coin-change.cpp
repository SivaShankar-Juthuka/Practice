//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int solve(int ind, int sum, int coins[], vector<vector<long long>>&dp, int &N){
        if(sum == 0) return 1;
        if(ind >=N  or sum < 0) return 0;
        if(dp[ind][sum] != -1) return dp[ind][sum];
        long long int l = 0, r = 0;
        l = solve(ind, sum-coins[ind], coins, dp, N);
        r = 0 + solve(ind+1, sum, coins, dp, N);
        dp[ind][sum] = l + r;
        return dp[ind][sum];
    }
    long long int count(int coins[], int N, int sum) {
        // code here.
        vector<vector<long long >>dp(N+1, vector<long long>(sum+1, -1));
        return solve(0, sum, coins, dp, N);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends