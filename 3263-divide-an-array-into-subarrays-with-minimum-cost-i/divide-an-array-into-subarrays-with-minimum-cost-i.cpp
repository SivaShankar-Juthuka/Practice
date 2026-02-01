class Solution {
public:
    int solve(vector<int>&nums,int n,int ind,int k){
        if(k <= 0) return 0;
        if(ind >= n) return 5000;
        int a = nums[ind] + solve(nums,n,ind+1,k-1);
        int b = solve(nums,n,ind+1,k);
        return min(a,b);
    }
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        return nums[0]+solve(nums,n,1,2);
    }
};