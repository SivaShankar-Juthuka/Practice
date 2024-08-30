class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cur =0, dif = 0, cnt = 0;
        map<int, int>mpp;
        mpp[0] = 1;
        for(int i = 0; i < nums.size(); i++) {
            cur += nums[i];
            dif = cur - k;
            cout << mpp[dif] << " ";
            cnt += mpp[dif];
            mpp[cur] += 1;
        }
        
        return cnt;
    }
    /*
        1, 2, 3, 4, 5, 6 -> k = 4
        mp[0] = 1
        cur = 1, dif = 1 - 4 = -3,  cnt += mpp[dif], mpp[1] = 1
        cur = 3, dif = 3 - 4 = -1, cnt += mpp[dif], mpp[3] = 1
        cur = 6, dif = 6 - 4 = 2, cnt += mpp[dif], mpp[2] = 1
        cur = 10, dif = 10 -4 = 6, cnt += mpp[dif], mpp[6] = 1
        cur = 15, dif = 15 - 4 = 11, cnt += mpp[dif], mpp[11] = 1
        cur = 21, dif = 21 - 4 = 17, cnt += mpp[dif], mpp[17] = 1
    */
};