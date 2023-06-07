//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        int i = 0, j = 0, top = R, down = R, right = C, left = C;
        vector<int>res;
        while(top and down and right and left){
            for(int k = 0; k< right; k++){
                res.emplace_back(a[i][j++]);
            }
            j-= 1;
            i += 1;
            top -= 1;
            down -= 1;
            if(top == 0 or down == 0 or right == 0 or left == 0){
                break;
            }
            for(int k = 0; k< down ; k++){
                res.emplace_back(a[i++][j]);
            }
            i -= 1;
            j -= 1;
            right -= 1;
            left -=1;
            if(top == 0 or down == 0 or right == 0 or left == 0){
                break;
            }
            for(int k = 0; k<left ; k++){
                res.emplace_back(a[i][j--]);
            }
            j+= 1;
            i-= 1;
            top -= 1;
            down -=1;
            if(top == 0 or down == 0 or right == 0 or left == 0){
                break;
            }
            for(int k = 0; k< top; k++){
                res.emplace_back(a[i--][j]);
            }
            i += 1;
            j += 1;
            right -= 1;
            left -= 1;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends