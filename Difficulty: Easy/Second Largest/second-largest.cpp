//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int sec_lar = INT_MIN, lar = INT_MIN;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > lar) {
                sec_lar = lar;
                lar = arr[i];
            }
            else if(arr[i] > sec_lar and arr[i] != lar) {
                sec_lar = arr[i];
            }
        }
        return sec_lar;
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
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends