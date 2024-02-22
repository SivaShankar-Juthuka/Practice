//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int mod = 1e9 + 7;
    int solve(int ind, int i, string &s, string &t, vector<vector<int>>&dp){
        if(i == t.size()) return 1;
        if(ind >= s.size()) return 0;
        if(dp[ind][i] != -1) return dp[ind][i];
        long long res = 0;
        if(s[ind] == t[i]){
            res += solve(ind +1, i +1, s, t, dp);
        }
        res += solve(ind+1, i, s, t, dp);
        return dp[ind][i] = res %mod;
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
        vector<vector<int>>dp(s.size()+1, vector<int>(t.size()+1, -1));
        return solve(0, 0, s, t, dp);   
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends