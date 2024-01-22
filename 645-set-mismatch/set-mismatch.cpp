class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int t = (n * (n +1)) / 2, s = nums[0], dp = 0;
        for(int i = 1; i < n ; i++){
            if(nums[i] == nums[i-1]) dp = nums[i];
            s += nums[i];
        }
        int m = t - (s - dp);
        return {dp, m};
    }
};