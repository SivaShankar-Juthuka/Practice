class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> suf(n);
        pre[0] = nums[0];
        for(int i = 1; i < n; i++){
            pre[i] = pre[i - 1] + nums[i];
        }
        suf[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--){
            suf[i] = suf[i + 1] + nums[i];
        }

        vector<int> res;
        for(int i = 0; i < n; i++){
            int lft = abs((i * nums[i]) - (i == 0 ? 0 : pre[i - 1]));
            int rft = abs(((n - i - 1) * nums[i]) - (i == n - 1 ? 0 : suf[i + 1]));
            res.push_back(lft + rft);
        }
        return res;
    }
};
