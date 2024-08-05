//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long gcd(long long a, long long b) {
        if(a == 0 or b == 0) {
            if(a) return a;
            else return b;
        }
        if(a > b) {
            gcd(a - b, b);
        }
        else {
            gcd(a, b - a);
        }
    }
    vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
        long long g = gcd(a, b);
        long long l = (a * b) /g;
        return {l, g};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends