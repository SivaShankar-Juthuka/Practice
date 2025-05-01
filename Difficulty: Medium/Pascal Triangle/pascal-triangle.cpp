//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        if(n == 1) return {1};
        if(n == 2) return {1, 1};
        vector<int> res = {1, 1};  
    
        for (int i = 2; i < n; i++) {
            vector<int> tmp(i + 1, 1);  
    
            for (int j = 1; j < i; j++) {
                tmp[j] = res[j - 1] + res[j];  
            }
    
            res = tmp;  
        }
    
        return res;
    }
};



//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends