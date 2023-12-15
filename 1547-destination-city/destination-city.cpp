class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string>mp;
        for(int i = 0; i<paths.size(); i++){
           mp[paths[i][0]] = paths[i][1];
        }
        map<string, vector<string>>res;
        for(auto it: mp){
            res[it.first].push_back(it.second);
            string sec = it.second;
            while(mp.find(sec) != mp.end()){
                res[it.first].push_back(mp[sec]);
                sec = mp[sec];
            }
        }
        int size = 0;
        string ans = "";
        for(auto it: res){
            if(size < it.second.size()){
                size = it.second.size();
                ans = it.first;
            }
        }
        return res[ans][size-1];
    }
};