class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int si=nums.size();
        int p=1,flag=0;
        for(int i=0;i<si;i++){
             if(nums[i]!=0)   
                p*=nums[i];
            else{
                flag++;
            }
        }
        vector<int>res;
        for(int i=0;i<si;i++){
            if(flag>1){
                res.emplace_back(0);
            }
            else if(nums[i]!=0 && flag==0){
                res.emplace_back(p/nums[i]);
            }
            else{
                if(nums[i]!=0){
                    res.emplace_back(0/p);
                }
                else{
                    res.emplace_back(p);
                }
            }
            
        }
        return res;
    }
};