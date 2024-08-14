//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:

    int solve(vector<int> arr, int i, int max) {
        if(i == arr.size()) return max;
        if(arr[i] > max) max = arr[i];
        return solve(arr, i + 1, max);
    }
    int largest(vector<int> &arr, int n) {
        return solve(arr, 1, arr[0]);
    }
    
    
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends