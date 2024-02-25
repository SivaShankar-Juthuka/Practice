//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        // int sum = 0;
        int solve(int k, int sum){
            if(k <= 6) return k;
            sum = max(sum, solve(k/2, (k/2)) + solve(k/3, (k/3)) + solve(k/4, (k/4)));
            return sum ;
        }
        int maxSum(int n)
        {
            return solve(n, n);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends