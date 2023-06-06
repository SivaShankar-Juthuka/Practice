//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &matrix, int n, int m, int k)
    {
        // Your code goes here
        int i = 0, j =0;
        int top = n, down = n, right = m, left = m;
        vector<int>v;

        while(top and down and right and left){
            for(int k = 0; k<right ; k++){
                v.emplace_back(matrix[i][j]);
                j += 1;
            }
            j-= 1;
            i += 1;
            top -= 1;
            down -= 1;
            if(top == 0 or down == 0 or right == 0 or left == 0){
                break;
            }
            for(int k = 0; k< down ; k++){
                v.emplace_back(matrix[i][j]);
                i += 1;
            }
            right -= 1;
            left -= 1;
            i -= 1;
            j -= 1;
            if(top == 0 or down == 0 or right == 0 or left == 0){
                break;
            }
            for(int k = 0; k< left ; k++){
                v.emplace_back(matrix[i][j]);
                j -= 1;
            }
            top -= 1;
            down -= 1;
            j += 1;
            i-= 1;
            if(top == 0 or down == 0 or right == 0 or left == 0){
                break;
            }
            for(int k = 0; k < top; k++){
                v.emplace_back(matrix[i][j]);
                i -= 1;
            }
            right -= 1;
            left -= 1;
            i += 1;
            j += 1;
        }
        return v[k-1];
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends