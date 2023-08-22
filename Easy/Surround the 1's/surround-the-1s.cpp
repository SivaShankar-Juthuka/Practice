//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
     int Count(vector<vector<int> >& matrix) {
        // Code here
        int count=0,ans=0;
        int row= matrix.size();
        int col= matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==1){
                    for(int delrow=-1;delrow<=1;delrow++){
                        for(int delcol=-1;delcol<=1;delcol++){
                            int nrow = i+delrow;
                            int ncol = j+delcol;
                            if(nrow >= 0 && nrow < row && ncol >= 0 && ncol <col && matrix[nrow][ncol]==0){
                                count++;
                            }
                        }
                    }
                    if((count%2==0)&&count!=0){
                        ans++;
                    }
                    count=0;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends