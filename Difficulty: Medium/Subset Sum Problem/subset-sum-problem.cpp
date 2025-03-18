//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool solve(int ind, int &n, int sum, vector<int> &arr, vector<vector<int>> &dp) {
        if (sum == 0) return true;
        if (ind >= n) return false;
    
        if (dp[ind][sum] != -1) return dp[ind][sum];
        bool pick = false;
        if (arr[ind] <= sum) {
            pick = solve(ind + 1, n, sum - arr[ind], arr, dp);
        }

        bool notpick = solve(ind + 1, n, sum, arr, dp);
    
        return dp[ind][sum] = pick || notpick; 
    }
    
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1)); 
        return solve(0, n, sum, arr, dp);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends