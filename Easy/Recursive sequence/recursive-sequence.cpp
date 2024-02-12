//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int mod = 1e9 + 7;
    long long res = 0;
    long long solve(long long k, long long cnt, int &n){
        if(cnt > n) return 0;
        long long i = 1, ans = 1;
        while(i <= cnt){
            ans = ((ans%mod ) * (k%mod))% mod;
            i += 1;
            k += 1;
        }
        res = (res%mod + ans%mod)%mod;
        solve(k, cnt +1, n);
        return res%mod;
    }
    long long sequence(int n){
        // code here
         return solve(1, 1, n);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends