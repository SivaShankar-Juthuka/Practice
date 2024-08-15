class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0, cnt = 0;
        for(int i = 0; i< nums.size(); i++) {
            if(nums[i] == 1) {
                cnt += 1;
            } 
            else {
                mx = max(cnt, mx);
                cnt = 0;
            }
        }
        mx = max(cnt, mx);
        cnt = 0;
        return mx;
    }
};