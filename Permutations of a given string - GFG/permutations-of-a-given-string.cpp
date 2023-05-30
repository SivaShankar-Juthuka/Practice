//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void permute(string& a, int l, int r, vector<string> &res){
            if (l == r)
                res.emplace_back(a);
            else {
                for (int i = l; i <= r; i++) {
                    swap(a[l], a[i]);
                    permute(a, l + 1, r,res);
                    swap(a[l], a[i]);
                }
            }
        }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>res;
		    int n = S.size();
		    permute(S, 0, n-1, res);
		    map<string, int>mp;
		    for(int i = 0; i<res.size();i++){
		        mp[res[i]]++;
		    }
		    res.clear();
		    for(auto it: mp){
		        res.emplace_back(it.first);
		    }
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends