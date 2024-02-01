class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < n; i+=3){
            vector<int>tmp(nums.begin() + i, nums.begin() + i + 3);
            // for(int i = 0; i<3; i++) cout<<tmp[i]<<" ";
            if((tmp.back() - tmp[0]) <= k){
               res.push_back(tmp);
            }
            else return {};
        }
        return res;
    }
};