class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int ps = 0, ns = 1;
        vector<int> res(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < 0) {
                res[ns] = nums[i];
                ns += 2;
            }
            else {
                res[ps] = nums[i];
                ps += 2;
            }
        }

        return res;
    }
};