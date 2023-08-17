class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>res;
        for(int i=0;i<nums.size() - 2;++i){
            if(i>0 && nums[i]==nums[i-1])continue;
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int x=nums[i]+nums[l]+nums[r];
                if(x==0){
                    res.insert({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(x>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        vector<vector<int>>res2(res.begin(),res.end());
        return res2;
    }
};