//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long solve(long long &res, long long n) {
        if (n == 0) return res;
        else{
            res += ((n * n) * n);
            solve(res, n-1);
        }
        // return res;
    }
    long long sumOfSeries(long long n) {
        // code here
        long long res = 0;
        solve(res, n);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends