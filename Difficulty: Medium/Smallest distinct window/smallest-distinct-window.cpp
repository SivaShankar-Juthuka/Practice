//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        // code here
        unordered_map<char, int> freq;
        for(auto it: str) {
            freq[it]++;
        }
        int req = freq.size(), left = 0, right = 0, formed = 0;
        unordered_map<char, int> mp;
        int minLen = INT_MAX;
        
        while (right < str.length()) {
            char c = str[right];
            mp[c]++;
            if (mp[c] == 1) {
                formed++;
            }
    
            while (formed == req) {
                minLen = min(minLen, right - left + 1);
                mp[str[left]]--;
                if (mp[str[left]] == 0) {
                    formed--;
                }
                left++;
            }
            right++;
        }
        return minLen;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends