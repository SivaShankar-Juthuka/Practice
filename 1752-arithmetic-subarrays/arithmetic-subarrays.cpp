class Solution {
public:
    bool check(vector<int>nums, int st, int end){
        vector<int>v(nums.begin()+st, nums.begin()+end+1);
        sort(v.begin(), v.end());
        set<int>s;
        for(int i = 1; i<v.size(); i++){
            s.insert(v[i-1] - v[i]);
        }
        if(s.empty() or s.size() == 1) return true;
        return false;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = l.size();
        vector<bool> res;
        for(int i = 0; i < n; i++){
            if(check(nums, l[i], r[i])){
                res.emplace_back(true);
            }
            else{
                res.emplace_back(false);
            }
        }
        return res;
    }
};