class Solution {
public:
    void solve(int k, int l, vector<vector<int>> &matrix) {
        for(int i = 0; i < matrix[0].size(); i++) {
            matrix[k][i] = 0;
        }
        for(int i = 0; i < matrix.size(); i++) {
            matrix[i][l] = 0;
        }
        return;
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> ind;
        for(int i = 0; i<matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    ind.push_back({i, j});
                }
            }
        }

        for(int i = 0; i < ind.size(); i++) {
            solve(ind[i].first, ind[i].second, matrix);
        }
        return;
    }
};