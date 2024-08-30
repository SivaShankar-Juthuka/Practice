class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n == 1) return {{1}};
        if(n == 2) return {{1}, {1, 1}};
        else{
            vector<vector<int>> res(n);
            res[0] = {1};
            res[1] = {1, 1};
            for(int i = 3; i <= n; i++) {
                res[i-1] = {};
                int j = 0;
                while(j < i) {
                    if(j == 0 or j == i-1) {
                        res[i-1].push_back(1); 
                    }
                    else {
                        res[i-1].push_back(res[i-2][j-1] + res[i-2][j]);
                    }
                    j += 1;
                }
            }
            return res;
        }
    }
};