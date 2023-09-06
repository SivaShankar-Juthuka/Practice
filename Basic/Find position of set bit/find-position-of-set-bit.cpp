//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int c=1, i=0;
        while(N!=0)
        { i++;
            if(N&1==1)
            {  c++; 
              
            }
            N=N>>1;
        }
        if(c>2 || c==1)
            return -1;
        else
            return i;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends