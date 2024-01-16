//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int m, int n, int v){
        if(n == 0) return 1;
        if(v > m) return 0;
        int x = solve(m, n-1, 2*v);
        int y = solve(m, n, v+1);
        return x+y;
    }
    int numberSequence(int m, int n){
        // code here
        return solve(m, n, 1);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends