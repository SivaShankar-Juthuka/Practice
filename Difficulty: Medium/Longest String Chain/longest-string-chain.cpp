//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isPred(const string &a, const string &b) {
        if (a.size() != b.size() + 1) {
            return false;
        }
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                i++;
                j++;
            } else {
                i++;
            }
        }
        return (j == b.size());
    }
    
    int longestStringChain(vector<string> &words) {
      
        sort(words.begin(), words.end(), [](const string &a, 
                                            const string &b) {
            return a.size() < b.size();
        });
    
        int n = words.size(), res = 1;
        vector<int> dp(n, 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (isPred(words[i], words[j])) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            res = max(res, dp[i]);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> words;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            words.push_back(number);
        }
        Solution obj;
        cout << obj.longestStringChain(words) << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends