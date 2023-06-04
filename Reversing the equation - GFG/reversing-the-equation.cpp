//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            int i = 0;
            string res = "";
            while (i < s.length()) {
                string c = "";
                while (i < s.length() && s[i] != '*' && s[i] != '-' && s[i] != '+' && s[i] != '/') {
                    c += s[i];
                    i++;
                }
                if (i < s.length()) {
                    c = s[i] + c;
                    i++;
                }
                res = c + res;
            }
            return res;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends