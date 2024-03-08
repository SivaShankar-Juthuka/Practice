class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]+=1;
        }
        int av=0;
        for(auto it:mpp){
            if(it.second>av)av=it.second;
        }
        int ans=0;
        for(auto it:mpp){
            if(it.second==av){
                ans+=it.second;
            }
        }
        return ans;
    }
};