class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int>wf;
        map<int, int>lf;
        for(auto it: matches){
            wf[it[0]]++;
            lf[it[1]]++;
        }
        vector<vector<int>>res(2);
        for(auto it :wf){
            if(lf.find(it.first) == lf.end()){
                res[0].emplace_back(it.first);
            }
        }
        for(auto it: lf){
            if(it.second == 1){
                res[1].emplace_back(it.first);
            }
        }
        return res;
    }
};