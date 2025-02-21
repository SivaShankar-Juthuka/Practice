//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        int i = 0, n = s.length();
        stack<char> st;
        
        while(i != n) {
            if(s[i] == '(' or s[i] == '{' or s[i] == '[') {
                st.push(s[i]);
            }
            else {            
            
                if (!st.empty() && 
                    ((st.top() == '(' && s[i] == ')') or
                     (st.top() == '{' && s[i] == '}') or
                     (st.top() == '[' && s[i] == ']'))) {
    
                    st.pop(); 
                }
                else {
                    return false; 
                }
            }
            i += 1;
        }
        return st.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends