//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        priority_queue<pair<int, vector<int>>> gq;
        vector<vector<int>> res;
        
        for(int i = 0; i < points.size(); i++) {
            int tmp = (points[i][0] * points[i][0]) + (points[i][1] * points[i][1]);
            if(gq.size() < k) {
                gq.push({tmp, points[i]});
            }
            else {
                if(tmp < gq.top().first) {
                    gq.pop();
                    gq.push({tmp, points[i]});
                }
            }
        }
        
        while(!gq.empty()) {
            res.push_back(gq.top().second);
            gq.pop();
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends