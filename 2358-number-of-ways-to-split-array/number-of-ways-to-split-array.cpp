class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        vector<long long int> pfs(n, 0);
        vector<long long int> sfs(n, 0);
        pfs[0] = nums[0];
        sfs[n-1] = nums[n-1];

        for(int i = 1; i < n; i++) {
            pfs[i] = pfs[i-1] + nums[i];
            sfs[n-i-1] = sfs[n-i] + nums[n-i-1]; 
        }       

        for(int i = 1; i < n; i++) {
            if(pfs[i-1] >= sfs[i]){
                cnt += 1;
            }   
        }
        return cnt;
    }
};