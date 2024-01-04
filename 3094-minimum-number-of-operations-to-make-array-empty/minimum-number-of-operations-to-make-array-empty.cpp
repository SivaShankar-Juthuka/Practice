class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int>mp;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }
        int cnt = 0, flag = 0;
        for(auto it : mp){
            if(it.second == 1){
                flag = 1;
                break;
            }
            if(it.second %3 == 0){
                cnt += it.second /3;
            }
            else if(it.second%3 == 1){
                cnt += (it.second-4)/3 + 2;
            }
            else if(it.second%3 == 2){
                cnt += (it.second-2)/3 + 1;
            }
            else if(it.second % 2 == 0){
                cnt += it.second / 2;
            }
        }
        return flag == 1? -1: cnt;
    }
};

        
        
