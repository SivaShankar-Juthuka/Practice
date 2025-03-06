class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> tmp(grid.size() * grid[0].size(), 0);

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                tmp[grid[i][j] - 1] += 1;
            }
        }
        int mis = -1, rep = -1;
        for(int i = 0; i < tmp.size(); i++) {
            if(tmp[i] == 0) {
                mis = i + 1;
            }
            else if(tmp[i] > 1){
                rep = i + 1;
            }
        }
        return {rep, mis};
    }
};