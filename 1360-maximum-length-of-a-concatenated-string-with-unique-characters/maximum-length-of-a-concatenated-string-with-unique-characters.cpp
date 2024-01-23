class Solution {
public:
    bool verify(vector<string>res){
        unordered_map<int, int>mp;
        for(int i = 0; i<res.size(); i++){
            for(int j = 0; j < res[i].size(); j ++){
                mp[res[i][j]-'a']++;
            }
        }
        for(auto it : mp){
            if(it.second >1) return false;
        }
        return true;
    }
    int solve(int i, vector<string>&arr, vector<string>res){
        if(i >= arr.size()) return 0;
        res.emplace_back(arr[i]);
        int a = 0, b = 0;
        if(verify(res)){
            a = arr[i].size() + solve(i + 1, arr, res);
        }
        res.pop_back();
        b = solve(i+1, arr, res);
        return max(a, b);
    }
    int maxLength(vector<string>& arr) {
        vector<string>res;
        return solve(0, arr, res);
    }
};