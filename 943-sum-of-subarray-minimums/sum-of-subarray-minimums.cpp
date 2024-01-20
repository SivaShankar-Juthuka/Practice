class Solution {
public:
    long long MOD = 1e9+7;
    // long long solve(long long ind,long long n,vector<int>&arr,long long i,vector<vector<long long>>&dp){
    //     if(ind >= n) return 0;
    //     long long ans = 0;
    //     if(dp[ind][i] != -1) return dp[ind][i];
    //     if(arr[ind] < arr[i]) ans = (((ans%mod) + (arr[ind]%mod))%mod + solve(ind+1,n,arr,ind,dp)%mod)%mod;
    //     else ans = (((ans%mod) + (arr[i]%mod))%mod + solve(ind+1,n,arr,i,dp)%mod)%mod;
        
    //     return dp[ind][i] = ans%mod;
    // }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<long long> left(n), right(n);

        // Calculate the next smaller element on the right
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        for(int i = 0 ; i < n ; i++) cout << right[i] << " ";
        cout << endl;

        // Clear the stack for the next traversal
        while (!st.empty()) {
            st.pop();
        }

        // Calculate the next smaller element on the left
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        long long result = 0;

        // Calculate the contribution of each element
        for (int i = 0; i < n; i++) {
            long long count_left = i - left[i];
            long long count_right = right[i] - i;
            result = (result + (count_left * count_right % MOD) * arr[i] % MOD) % MOD;
        }

        return result;
    }
};