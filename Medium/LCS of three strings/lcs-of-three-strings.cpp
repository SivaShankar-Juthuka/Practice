//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int dp[21][21][21];
        int solve(string &s1, string &s2, string &s3, int x, int y, int z){
            if(x < 0 or y < 0 or z < 0) return 0;
            if(dp[x][y][z] != -1) return dp[x][y][z];
            if(s1[x] == s2[y] and s2[y] == s3[z]){
                return dp[x][y][z] =  1 + solve(s1, s2, s3, x-1, y-1, z-1);
            }
            else{
                dp[x][y][z] =max(solve(s1, s2, s3, x, y, z-1), 
                                max(solve(s1, s2, s3, x, y-1, z), solve(s1, s2, s3, x-1, y, z)));
            }
            return dp[x][y][z];
        }
        int LCSof3 (string A, string B, string C, int n1, int n2, int n3){
            // your code here
            memset(dp, -1, sizeof(dp));
            return solve(A, B, C, n1-1, n2-1, n3-1);
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends