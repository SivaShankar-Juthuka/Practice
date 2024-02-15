class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());;;
        int n = nums.size();
        long long res = 0;
        for(auto it : nums) res += it;
        for(int i = n-1; i>=0; i--){
            res -= nums[i];
            if(res > nums[i]) return res + nums[i];
        }
        return -1;
    }
};