//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        // code here4
        vector<pair<int, int>> res;
        for (int i = 0; i < n; ++i) {
            if (gallery[i] != -1) {
                res.push_back({max(0, i - gallery[i]), min(n - 1, i + gallery[i])});
            }
        }
        
        int start = 0;
        int ans = 0;
        sort(res.begin(), res.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
        });
        int max_range = 0;
        while (start < n) {
            if (!res.empty() && res.back().first <= start) {
                int s = res.back().first;
                int e = res.back().second;
                res.pop_back();
                max_range = max(max_range, e + 1);
            } else if (max_range > start) {
                start = max_range;
                ans++;
            } else {
                return -1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int gallery[n];
        for(int i=0; i<n; i++)
            cin>> gallery[i];
        Solution obj;
        cout<< obj.min_sprinklers(gallery,n) << endl;
    }
	return 1;
}

// } Driver Code Ends