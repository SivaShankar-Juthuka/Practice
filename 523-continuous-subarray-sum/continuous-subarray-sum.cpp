class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0;
        for (int i = 0 ; i < size(nums); ++i) {
            sum = (sum + nums[i]) % k;
            cout << sum <<"\n";
            if(sum == 0 and i != 0) return true;
            if (mp.find(sum) != mp.end() && i - mp[sum] > 1) {
                return true;
            }
            else if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        return false;
    }
};