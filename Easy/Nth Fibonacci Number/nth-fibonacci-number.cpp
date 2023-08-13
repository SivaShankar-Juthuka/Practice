//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// Fibonacci Series 
/// 1 1 2 3 5 8 13 21 34 55 89
#define mod 1000000007
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int f = 1, s = 1, t;
        n -= 2;
        if(n <= 2) return 1;
        while(n ){
            t = (f % mod  + s % mod )%mod;
            f = s;
            s = t;
            n-= 1;
        }
        return t ;
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends