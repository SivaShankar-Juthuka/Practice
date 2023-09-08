class Solution {
public:
    vector<vector<int>> generate(int n){
        if(n==1) return {{1}};
        if(n==2) return {{1},{1,1}};
        vector<vector<int>> res;
        res={{1},{1,1}};

        for(int i=0; i<n-2; i++){
            vector<int> temp={1};
            for(int i=0; i<(res.back()).size()-1; i++){
                temp.emplace_back(res.back()[i]+res.back()[i+1]);
            }
            temp.emplace_back(1);
            res.emplace_back(temp);
        }
        return res;
    }
};