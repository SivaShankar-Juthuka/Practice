class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int, vector<int>>mp;
        int n = mat.size(), flag = 0;
        for(int i = 0; i < n; i++){
            mp[count(mat[i].begin(), mat[i].end(), 1)].emplace_back(i);
        }   
        vector<int>c;
        for(auto it : mp){
            for(auto i : it.second){
                c.emplace_back(i);
                k -= 1;
                if(k == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) break;
        }
        return c;
    }
};