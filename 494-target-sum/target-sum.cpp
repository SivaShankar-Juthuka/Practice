class Solution {
public:
    int cnt = 0;
    void solve(int ind, int sum, int tar, vector<int> &nums, int n){
        if(ind == n){
            if(sum == tar) cnt += 1;
            return;
        }
        solve(ind+1, sum + nums[ind], tar, nums, n);
        solve(ind+1, sum - nums[ind], tar, nums, n);
        return;
    }
    int findTargetSumWays(vector<int>& nums, int target) {

        solve(0, 0, target, nums, nums.size());
        return cnt;
    }
};