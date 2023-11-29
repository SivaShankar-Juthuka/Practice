//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void patternRecursion(int N, vector<int>& v, int t) {
        v.push_back(t);
        if (t <= 0) {
            return;
        }
        patternRecursion(N, v, t - 5);
        if (t <= N) {
            v.push_back(t);
        }
    }

    vector<int> pattern(int N) {
        vector<int> v;
        patternRecursion(N, v, N);
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends