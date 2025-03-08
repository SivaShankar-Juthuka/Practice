//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longestPalindrome(string &s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        
        int start = 0, maxLen = 1;
    
        for (int i = 0; i < n; ++i)
            dp[i][i] = true;
    
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                if (maxLen<2) {
                    start = i;
                    maxLen = 2;
                }
            }
        }
    
        for (int k = 3; k <= n; ++k) {
            for (int i = 0; i < n - k + 1; ++i) {
                int j = i + k - 1;
    
                if (dp[i + 1][j - 1] && s[i] == s[j]) {
                    dp[i][j] = true;
    
                    if (k > maxLen) {
                        start = i;
                        maxLen = k;
                    }
                }
            }
        }
    
        return s.substr(start, maxLen);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends