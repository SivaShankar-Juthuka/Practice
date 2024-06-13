//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
    int padovanSequence(int n) {
        // code here.
        int MOD = 1e9 + 7;
    
        if (n == 0 || n == 1 || n == 2) {
            return 1;
        }
    
        vector<int> P = {1, 1, 1};
    
        for (int i = 3; i <= n; i++) {
            P.push_back((P[i-2] + P[i-3]) % MOD);
        }
    
        return P[n];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends