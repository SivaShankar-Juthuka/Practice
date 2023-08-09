//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n){
        // code here
        int res = INT_MIN;
        for(int i = 2; i *i <= n; i++){
            while(n% i == 0){
                if(res < i){
                    res = i;
                }
                n /= i;
            }
        }
        if(n > 1){
            if(res < n) res = n;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends