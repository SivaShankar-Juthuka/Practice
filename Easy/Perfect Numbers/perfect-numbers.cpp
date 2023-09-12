//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if(N == 1) return 0;
        long long res = 1;
        for(long long i=2; i*i<N; i++){
            if(N%i==0){
                res += i+(N/i);
                // cout<<res<<" "<<i<<" "<<(N/i)<<"\n";
            }
            // cout<<i<<" \n";
        }
        return res == N;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends