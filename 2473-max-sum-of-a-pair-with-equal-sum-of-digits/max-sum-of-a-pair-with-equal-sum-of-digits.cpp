class Solution {
public:
    int sum(int n) {
        int tmp = 0;
        while(n) {
            tmp += n%10;
            n = n/10;
        }
        return tmp;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<long long, vector<int>> mp;
        for(int i = 0; i < nums.size(); i++) {
            int tmp = sum(nums[i]);
            mp[tmp].push_back(nums[i]);
        }
        int res = -1;
        for(auto it : mp) {
            if(it.second.size() == 1) continue;
            else if(it.second.size() == 2) {
                res = max(res, it.second[0] + it.second[1]);
            }
            else{
                sort(it.second.begin(), it.second.end());
                res = max(res, it.second[it.second.size() - 2] + it.second[it.second.size() - 1]);
            }
        }

        return res;
    }
};