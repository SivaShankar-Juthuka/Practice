class Solution {
public:
    int rev(int n){
        int res = 0, mod = 1e9 + 7;;
        while (n) {
            int rem = n % 10;
            res = ((long long)res * 10 + rem) % mod;
            n /= 10;
        }
        return res;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size(), res = 0;
        int mod = 1e9 + 7;
        map<int, int>mp;
        for(int i = 0; i<n; i++){
            mp[nums[i] - rev(nums[i])] ++;
        }
        for(auto it : mp){
            if(it.second != 1){
                res +=( ((long long)it.second * (it.second - 1)) / 2) % mod;
            }
        }
        return res % mod;
    }
};