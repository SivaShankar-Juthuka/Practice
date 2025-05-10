//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        unordered_map<int, int> firstIndex;
        int maxLen = 0;
        int prefixSum = 0;
    
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] > k) prefixSum += 1;
            else prefixSum -= 1;
            
            if (prefixSum > 0) {
                maxLen = i + 1;
            }
            else {
                if (firstIndex.find(prefixSum - 1) != firstIndex.end()) {
                    maxLen = max(maxLen, i - firstIndex[prefixSum - 1]);
                }
            }
    
            if (firstIndex.find(prefixSum) == firstIndex.end()) {
                firstIndex[prefixSum] = i;
            }
        }
    
        return maxLen;
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
        getline(cin, input);
        int k = stoi(input);

        Solution ob;
        cout << ob.longestSubarray(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends