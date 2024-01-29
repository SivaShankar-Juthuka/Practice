//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string> res;
    void solve(int op, int cl, int n, string &s){
        if(op == n and cl == n){
            res.emplace_back(s);
            return;
        }
        if(op < n){
            s += "(";
            solve(op +1, cl, n, s);
            s = s.substr(0, s.length() -1);
        }
        if(op > cl){
            s += ")";
            solve(op, cl + 1, n, s);
            s = s.substr(0, s.length()-1);
        }
        return;
        
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        string s = "";
        solve(0, 0, n, s);
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
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends