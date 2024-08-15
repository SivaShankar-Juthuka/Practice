class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1, cnt = 1;
        while(j != nums.size()) {
            if(nums[i] != nums[j]) {
                i += 1;
                nums[i] = nums[j];
                cnt += 1;
            }
            else{
                j += 1;
            }
        }
        return cnt;
    }
};