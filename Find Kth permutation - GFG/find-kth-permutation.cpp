//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k) {
        string inp = "";
        for (int i = 1; i <= n; i++) {
            inp += to_string(i);
        }
        vector<int>v;
        for(int i = 0; i<n; i++){
            v.emplace_back((inp[i] - '0'));
        }
        while(k != 1){
            k -= 1;
            next_permutation(v.begin(), v.end());
        }
        string res = "";
        for(int i = 0; i<v.size(); i++){
            res += to_string(v[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends