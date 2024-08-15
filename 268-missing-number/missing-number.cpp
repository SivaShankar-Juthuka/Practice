class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size() == 1){
            if(nums[0] != 0) return 0;
            else nums[0] + 1;
        } 
        long long mx = INT_MIN, sum = 0;
        bool flag = false;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) flag = true;
            if(nums[i] > mx) mx = nums[i];
            // mx = max(mx, nums[i]);
            sum += nums[i];
        }
        if(flag == false) return 0;
        long long n = (mx * (mx +1)) / 2;
        return ((n - sum) == 0)? (mx + 1): (n - sum);
    }
};