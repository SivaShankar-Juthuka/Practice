//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int solve(vector<int> &v) {
        vector<int>res(32, 0);
        
        for(int i = 0; i < v.size(); i++) {
            int n = v[i], k = 0;
            while(n) {
                if((n&1) == 1) res[k] += 1;
                n = n>>1;
                k += 1;
            }
        }
        
        int ans = 0;
        for(int i = 0; i < 32; i++) {
            ans += (res[i]%3)*pow(2, i);
        }
        return ans;
    }
    int getSingle(vector<int> &arr) {
        // code here
        vector<int> neg, pos;
        int k = 0, res = 0;
        for(auto it : arr) {
            if(it < 0) {
                neg.emplace_back(-1*it);
            }
            else{
                pos.emplace_back(it);
            }
        }
        if(neg.size()%3 == 0) res += solve(pos);
        else res += solve(neg);
        
        return (neg.size()%3 == 0)? res : -1*res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSingle(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends