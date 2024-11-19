//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
/*
1. Find the Break Point  ( n -> 0)
2. swap it with largest with break point index  (n -> bp)
3. resverse it from bp and return it
*/
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int bp = -1;
        for(int i = arr.size() - 2; i >= 0; i--) {
           if(arr[i] < arr[i + 1]) {
                bp = i;
                break;
            }
        }
        
        if(bp == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        for(int i = arr.size() - 1; i > bp; i--) {
            if(arr[i] > arr[bp]) {
                swap(arr[i], arr[bp]);
                break;
            }
        }

        reverse(arr.begin() + bp + 1, arr.end()); 
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
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends