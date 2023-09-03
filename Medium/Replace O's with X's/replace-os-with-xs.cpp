//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(int i,int j,vector<vector<char>> &mat,vector<vector<char>> &res){
        res[i][j] = 'O';
        int dx[] = { 1,-1,0,0};
        int dy[] = {0,0,1,-1};
        for(int p = 0; p < 4; p++){
            int nx = i + dx[p];
            int ny = j + dy[p];
            if(nx >= 0 && ny >= 0 && nx < mat.size() && ny < mat[0].size() && mat[nx][ny] =='O' && res[nx][ny] == 'X'){
                solve(nx, ny, mat, res);
            }
        }
    }
    
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<char>> res(n,vector<char>(m,'X'));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j == m-1){
                    if(mat[i][j] == 'O')
                        solve(i,j,mat,res);
                }
            }
        }
        return res;
    }
 
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends