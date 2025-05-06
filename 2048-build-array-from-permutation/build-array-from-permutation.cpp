class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> val;

        for(int i = 0; i < nums.size(); i++) {
            val.emplace_back(nums[nums[i]]);
        }

        return val;
    }
};