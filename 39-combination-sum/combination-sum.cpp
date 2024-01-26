class Solution {
public:
    vector<vector<int>>res;
    void solve(int ind, int n, vector<int>&arr, int tot, vector<int>&tmp){
        if(ind == n){
            if(tot == 0){
                res.push_back(tmp);
            }
            return;
        }
        if(arr[ind] <= tot){
            tmp.emplace_back(arr[ind]);
            solve(ind, n, arr, tot-arr[ind], tmp);
            tmp.pop_back();
        }
        solve(ind+1, n, arr, tot, tmp);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>tmp;
        solve(0, candidates.size(), candidates, target, tmp);
        return res;
    }
};