//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int rep , mis = -1;
        map<int, int> mp;
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
            if(mp[arr[i]] == 2){
                rep = arr[i];
            }
        }
        int i = 1;
        for(auto it : mp){
            // cout<<it.first<<" "<<endl;
            if(it.first != i){
                mis = i;
                break;
            }
            i++;
        }
        if(mis == -1){
            mis = i++;
        }
        return {rep, mis};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends