class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        if(nums.size()==1 and nums[0]==0) return 1;
        if(nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        int max=nums[nums.size()-1],res,flag=0;
        
        for(int i=0;i<=max;i++){
            if(i!=nums[i]){
                res=i;
                flag=1;
                break;
            }
        }
        if(flag==1) return res;
        else return max+1;
    }
};