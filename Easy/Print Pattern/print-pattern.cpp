//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> pattern(int N){
        // code here
        int t = N;
        vector<int>v;
        while(true){
            if(t <= 0){
                break;
            }
            if(t > 0){
                v.emplace_back(t);
                t -= 5;
            }
        }
        //v.emplace_back(t)
        while(t != N){
            v.emplace_back(t);
            t += 5;
        }
        v.emplace_back(N);
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