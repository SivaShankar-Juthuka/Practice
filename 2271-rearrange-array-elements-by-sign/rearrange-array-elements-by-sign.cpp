class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(), i = 0, j = 1, k = 0;
        vector<int>res(n, 0);
        while(i < n or j < n){
            if(nums[k] < 0){
                res[j] = nums[k];
                j += 2;
            }
            else{
                res[i] = nums[k];
                i += 2;
            }
            k += 1;
        }
        return res;
    }
};