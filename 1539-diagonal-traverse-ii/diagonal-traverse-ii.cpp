class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int r = nums.size(), c = -1;
        for(int i = 0; i<r; i++){
            c =  (c < nums[i].size()) ? nums[i].size():c;
        }
        map<int, vector<int>>mp;
        for(int i = 0; i<r+c+1; i++){
            mp[i] = {};
        }
        for(int i = 0; i< r; i++){
            int k = nums[i].size();
            for(int j = 0; j < k; j++){
                mp[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> res;
        for(auto it: mp){
            for(int i =it.second.size()-1; i >= 0;  i--){
                res.emplace_back(it.second[i]);
            }
        }
        return res;
    }
};