class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> mp;
        bool flag = false;
        for(int i = 0; i < nums.size(); i++) {
            int dif = target - nums[i];
            if (mp.find(dif) != mp.end()) {
                return {mp[dif].back(), i};
            }
            mp[nums[i]].push_back(i);
        }
        return {-1, -1};
    }

    /* 
        0 => 9 - 2 = 7, 2 = 0
        1 => 9 - 7 = 2, 7 = 1 , [i, m[dif]]
    */
};