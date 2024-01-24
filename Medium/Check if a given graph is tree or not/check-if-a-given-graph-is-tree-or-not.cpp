//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
    void dfs(int node, vector<int>adj[], vector<int>&vis){
        // if(vis[node] == 1) return;
        vis[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]) dfs(it, adj, vis);
        }
        return;
    }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        if((n-m) != 1) return 0;
        vector<int>ad[n];
        vector<int>vis(n, 0);
        for(auto it : adj){
            ad[it[0]].push_back(it[1]);
            ad[it[1]].push_back(it[0]);
        }
        dfs(0, ad, vis);
        for(int i = 0; i<vis.size(); i++){
            if(vis[i] == 0) return 0;
        }
        return true;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> edges(m, vector<int>(2));
        Matrix::input(edges,m,2);
        
        Solution obj;
        int res = obj.isTree(n, m, edges);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends