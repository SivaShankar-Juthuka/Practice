//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int i = 0, j = 0, top = r, down = r, right = c, left = c;
        vector<int>v;
        while(top and down and right and left){
            for(int k = 0; k< right; k++){
                v.emplace_back(matrix[i][j++]);
            }
            j -= 1;
            i += 1;
            top -= 1;
            down -=1;
            if(top == 0 or down == 0 or right == 0 or left == 0){
                break;
            }
            for(int k = 0; k<down ; k++){
                v.emplace_back(matrix[i++][j]);
            }
            j-=1;
            i-=1;
            right -= 1;
            left -= 1;
            if(top == 0 or down == 0 or right == 0 or left == 0){
                break;
            }
            for(int k = 0; k< left ; k++){
                v.emplace_back(matrix[i][j--]);
            }
            j+= 1;
            i-= 1;
            top -= 1;
            down -= 1;
            for(int k = 0; k< top ; k++){
                v.emplace_back(matrix[i--][j]);
            }
            i += 1;
            j += 1;
            right -= 1;
            left -= 1;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends