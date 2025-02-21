//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        priority_queue<int> pq;
        priority_queue<int, vector<int>, greater<int>> gq;
        
        vector<double> res;
      
        for (int i = 0; i < arr.size(); i++) {
            pq.push(arr[i]);
            int tmp = pq.top();
            pq.pop();
            gq.push(tmp);
         
            if (gq.size() > pq.size()) {
                tmp = gq.top();
                gq.pop();
                pq.push(tmp);
            }
            
            double median;
            if (pq.size() != gq.size())
                median = pq.top();
            else
                median = (double)(pq.top() + gq.top()) / 2;
            res.push_back(median);
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends