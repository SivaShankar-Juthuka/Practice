class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix.front().size();
        int res = 0;
        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j]){
                    matrix[i][j] += matrix[i-1][j];
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            vector<int> cur = matrix[i];
            sort(cur.begin(), cur.end(), greater());
            for(int j = 0 ; j < m ; j++){
                res = max(res, (j+1)*cur[j]);
            }
        }
        return res;
    }
};