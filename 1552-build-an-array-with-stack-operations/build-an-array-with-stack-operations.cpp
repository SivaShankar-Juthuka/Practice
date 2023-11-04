class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        map<int, int>mp;
        int mx = INT_MIN;
        for(auto it: target){
            mp[it]++;
            mx = max(mx, it);
        }
        vector<string> v;
        for(int i = 1; i<=mx; i++){
            if(mp.find(i) != mp.end()){
                v.emplace_back("Push");
            }
            else{
                v.emplace_back("Push");
                v.emplace_back("Pop");
            }
        }
        return v;
    }
};