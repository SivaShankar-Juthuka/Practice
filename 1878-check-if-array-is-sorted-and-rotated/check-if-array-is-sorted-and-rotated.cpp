class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i-1] > nums[i]) cnt += 1;
        }
        // cout << cnt << '\n';
        if(nums[nums.size()-1] > nums[0]) cnt += 1;
        return cnt <= 1;
    }
};