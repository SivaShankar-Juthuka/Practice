//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        long long cur = 0, max_sum = INT_MIN;
        for(int i = 0; i < arr.size(); i++) {
            cur += arr[i];
            max_sum = max(max_sum, cur);
            if(cur <= 0) cur = 0;
        }
        return max_sum;
    }
    
    
    // long long int current_sum = 0, max_sum =INT_MIN;
    //     for(int i =0 ; i<n ; i++){
    //         current_sum += nums[i];
    //         max_sum = max(max_sum,current_sum);
    //         if(current_sum<=0){
    //             current_sum = 0;
    //         }
    //     }
    //     return max_sum;
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends