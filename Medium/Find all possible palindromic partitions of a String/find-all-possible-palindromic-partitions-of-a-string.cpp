//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<string>>res;
	void solve(string& str, vector<string>& tmp, int st) {
        if (st == str.length()) {
            res.push_back(tmp);
            return;
        }
        
        for (int i = st; i < str.length(); i++) {
            string s = str.substr(st, i - st + 1);
            if( s == string(s.rbegin(), s.rend())){
                tmp.push_back(s);
                solve(str, tmp, i + 1);
                tmp.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        vector<string> tmp;
        solve(S, tmp, 0);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends