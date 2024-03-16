class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size(), one = 0, zero = 0, res = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        for (int i = 0; i < n; i++) {
            one += nums[i];
            zero = (i + 1) - one;
            if (mp.find(one - zero) != mp.end()) {
                res = max(res, i - mp[one - zero]);
            } else {
                mp[one - zero] = i;
            }
        }
        return res;
    }
};