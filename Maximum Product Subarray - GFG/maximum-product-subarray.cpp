//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> nums, int n) {
	    // code here
	    if(nums.size() == 1) return nums[0];
        long long int cur_pr = 1, max_pr= INT_MIN, suf_pr = 1;
        for(long long int i = 0; i< n; i++){
            cur_pr *= nums[i];
            max_pr = max(max_pr , cur_pr);
            if(cur_pr == 0) cur_pr = 1;
        }
        for(long long int i = n-1; i>=0 ; i--){
            suf_pr *= nums[i];
            max_pr = max(max_pr, suf_pr);
            if(suf_pr == 0) suf_pr = 1;
        }
        return max_pr;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends