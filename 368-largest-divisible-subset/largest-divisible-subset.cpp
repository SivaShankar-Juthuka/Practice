class Solution {
public:
    vector<int>res;
    vector<int> solve(int ind, int n, vector<int>&nums, vector<int>&v,vector<int>&dp){
        if(ind >= n){
            if(res.size() < v.size()) res = v;
            return res;
        }
        int x=0;
        if(v.empty())x=1;
        else x=v.back();
        if(dp[ind]<(int)v.size() and nums[ind] % x== 0){
            dp[ind]=v.size();
            v.emplace_back(nums[ind]);
            solve(ind+1, n, nums, v,dp);
            v.pop_back();
        }
        solve(ind+1, n, nums, v,dp);
        if(res.size() < v.size()) res = v;
        return res;
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int>v;
        vector<int>dp(nums.size()+1,-1);
        sort(nums.begin(), nums.end());
        return solve(0, nums.size(), nums, v,dp);
        // return ;
    }
};