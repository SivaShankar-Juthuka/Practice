//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find the largest number after k swaps.
    string findMaximumNum(string& s, int k) {
        // code here.
        for(int i = 0; i < s.length(); i++) {
            char mx = s[i];
            int ind = i;
            for(int j = i+1; j < s.length(); j++) {
                if(mx <= s[j]) {
                    mx = s[j];
                    ind = j;
                }
            }
            if(s[ind] != s[i]) {
                swap(s[i], s[ind]);
                k -= 1;
                if(k == 0) return s;
            } 
        }
        
        return s;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends