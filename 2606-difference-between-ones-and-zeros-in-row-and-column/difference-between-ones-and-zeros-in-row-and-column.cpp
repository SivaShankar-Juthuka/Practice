class Solution {
public:
    void rowsum(vector<int>&row, vector<vector<int>>grid){
        int r = grid.size(), c= grid[0].size();
        for(int i = 0; i< r; i++){
            int rs = 0;
            for(int j = 0; j<c; j++){
                rs += grid[i][j];
            }
            row.emplace_back(rs);
        }
    }
    void colsum(vector<int>&col, vector<vector<int>>grid){
        int r = grid.size(), c= grid[0].size();
        for(int i = 0; i< c; i++){
            int cs = 0;
            for(int j = 0; j<r; j++){
                cs += grid[j][i];
            }
            col.emplace_back(cs);
        }
    }
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        vector<int>row;
        vector<int>col;
        vector<vector<int>>res;
        rowsum(row, grid);
        colsum(col, grid);
        for(int i = 0; i<r; i++){
            vector<int>sp;
            for(int j = 0; j<c; j++){
                sp.emplace_back((row[i]+col[j]) - ((r-row[i])+(c-col[j])));
            }
            res.push_back(sp);
        }
        return res;
    }
};