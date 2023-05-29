//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string> res;
        for(int i=0; i< N ;i++){
            string s="";
            for(int j=0; j<Dictionary[i].size() ;j++){
                if(Dictionary[i][j]>='A' && Dictionary[i][j]<='Z'){
                    s+=Dictionary[i][j];
                }
                if(s==Pattern){
                    res.push_back(Dictionary[i]);
                    break;
                }
            }
        }
        if(res.empty()){
            return {"-1"};
        }
        sort(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends