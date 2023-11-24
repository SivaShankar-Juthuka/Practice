//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        if(n==1) return {1};
        if(n==2) return {1,1};
        vector<long long> prev={1,1},curr;
        for(int i=2;i<n;++i){
            curr.clear();
            curr.push_back(1);
            for(int j=1;j<i;++j){
                curr.push_back((prev[j-1]+prev[j])% 1000000007);
            }
            curr.push_back(1);
            prev=curr;
        }
        return prev;
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
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
    }
    return 0;
}

// } Driver Code Ends