class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]] ++;
            // if(mp[nums[i]] > 1) nums[i] = 101;
        }
        int i = 0;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            nums[i] = it->first;
            i += 1;
        }
        return mp.size();
    }
};