class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size(), m = 0;
        unordered_map<int, int>mp;
        for(auto it : nums){
            mp[it]++;
            m = max(m, mp[it]);
        }
        vector<vector<int>>res;
        for(int i = 0; i<m; i++){
            res.push_back({});
        }

        for(auto it : mp){
            for(int i = 0; i<it.second; i++){
                res[i].emplace_back(it.first);
            }
        }
        return res;
    }
};