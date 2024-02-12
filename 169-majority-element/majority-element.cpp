class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int > m;
        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]]++;
        }
        int l=0,p;
        for(auto & it : m){
            if(l<it.second){
                l=it.second;
                p=it.first;
            }
        }
        return p;
    }
};