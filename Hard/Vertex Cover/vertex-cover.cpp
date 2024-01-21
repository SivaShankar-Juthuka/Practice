//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int solve(int nd, int n, int len, vector<int>adj[], vector<int>&deg){
            if(nd > n){
                if(len == 0) return 0;
                return 100;
            }
            for(auto it : adj[nd]){
                deg[it] -= 1;
            }
            int a = 1 + solve(nd+1, n, len- deg[nd], adj, deg);
            for(auto it : adj[nd]){
                deg[it] += 1;
            }
            int b = solve(nd+1, n, len, adj, deg);
            return min(a, b);
        }
        int vertexCover(int n, vector<pair<int, int>> &edges) {
            // code here
            vector<int> adj[n+1];
            vector<int>deg(n+1);
            for(auto it : edges){
                adj[it.first].push_back(it.second);
                adj[it.second].push_back(it.first);
            }
            for(int i = 0; i<=n; i++){
                deg[i] = adj[i].size();
            }
            return solve(1, n, edges.size(), adj, deg);
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> edges;
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            edges.push_back({a,b});
        }
        Solution s;
        cout<<s.vertexCover(n,edges)<<endl;
    }
    return 0;
}
// } Driver Code Ends