//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<char> l;
            unordered_map<char, int> m;
            string res = "";
            for (char x : A) {
                if (m.find(x) == m.end()) {
                    l.push_back(x);
                    m[x] = 1;
                } 
                else {
                    if (find(l.begin(), l.end(), x) != l.end()) {
                        l.erase(find(l.begin(), l.end(), x));
                    }
                }
                if(l.empty()) res += '#';
                else{
                    res += l[0];
                }
                // res += l.empty() ? "#" : to_string(l[0]);
            
            }
            return res;
        }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends