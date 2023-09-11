class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, vector<int>> mp;
        int n = groupSizes.size();
        for(int i = 0; i < n; i++){
            mp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>>v;
        for (auto it : mp) {
            int grps = it.first;
            vector<int>& group = it.second;
            for (int i = 0; i < group.size(); i += grps) {
                vector<int> subgroup(group.begin() + i, group.begin() + i + grps);
                v.push_back(subgroup);
            }
        }
        return v;
    }
};