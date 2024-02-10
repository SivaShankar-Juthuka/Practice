//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    // long long res = 0;
    long long solve(int r, int c, int &n, int k, vector<vector<int>> &arr, vector<vector<vector<int>>>&dp){
        if(r >= n or c >= n or k < 0) return 0;
        if(k == arr[n-1][n-1] and r == n-1 and c == n-1){
            return 1;
        }
        if(dp[r][c][k] != -1) return dp[r][c][k];
        long long a = solve(r+1, c, n, k - arr[r][c], arr, dp);
        long long b = solve(r, c+1, n, k - arr[r][c], arr, dp);
        return dp[r][c][k] = a + b;
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        // Code Here
        vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(n+1, vector<int>(k+1, -1)));
        return solve(0, 0, n, k, arr, dp);
        
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends