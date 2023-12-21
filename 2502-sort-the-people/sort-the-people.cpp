class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>>v;
        for(int i = 0; i<n; i++){
            v.push_back(make_pair(heights[i], names[i]));
        }
        sort(v.begin(), v.end());
        vector<string>res;
        for(int i = n-1; i>=0; i--){
            res.emplace_back(v[i].second);
        }
        return res;
    }
};