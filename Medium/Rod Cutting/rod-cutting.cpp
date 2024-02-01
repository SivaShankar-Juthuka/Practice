//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int res = 0;
    int solve(int ind, int n, int price[],vector<vector<int>>&v){
        if(ind>=n){
            return n*price[0];
        }
        if(v[ind][n]!=-1)return v[ind][n];
        int b = 0 + solve(ind+1,n,price,v);
        int a = INT_MIN;
        int r = ind+1;
        if(r<=n){
            a = price[ind]+solve(ind,n-r,price,v);
        }
        return v[ind][n]=max(a,b);
    }
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>>v(n+1,vector<int>(n+1,-1));
        return solve(0, n, price,v);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends