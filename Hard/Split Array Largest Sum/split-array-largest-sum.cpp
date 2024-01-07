//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int nums[], int mid, int n){
        int cnt = 1;
        long long res = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] + res <= mid){
                res += nums[i];
            }
            else{
                cnt += 1;
                res = nums[i];
            }
        }
        return cnt;
    }
    int splitArray(int nums[] ,int N, int K) {
        // code here
        int low = INT_MIN, high = 0;
        for(int i = 0; i<N; i++){
            low = max(low, nums[i]);
            high += nums[i];
        }
        while(low <= high){
            int mid = (low + high)/2;
            int val = solve(nums, mid, N);
            if(val > K){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends