class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size(), i = 0, j = n - 1, pos = -1;
        if(nums[j] < target) return n;
        while(i <= j) {
            int mid = i +(j - i) /2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target){
                j = mid -1; 
            } 
            else {
                i = mid +1;
            }
        }
        return i;
    }
};