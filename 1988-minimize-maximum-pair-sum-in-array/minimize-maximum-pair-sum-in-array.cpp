class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = INT_MIN, i = 0, j = nums.size()-1;
        while(i < j){
            int val = nums[i] + nums[j];
            res = max(res, val);
            i += 1;
            j -= 1;
        }
        return res;
    }
};