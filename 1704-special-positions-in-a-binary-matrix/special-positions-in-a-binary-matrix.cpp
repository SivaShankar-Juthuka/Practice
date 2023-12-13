class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size(), res = 0;
       vector<pair<int, int>>v;
       for(int i = 0; i<r; i++){
           for(int j = 0; j<c; j++){
               if(mat[i][j] == 1){
                   v.push_back(make_pair(i, j));
               }
           }
       }
       for(auto it: v){
            int i = it.first, j = it.second, fr = 0, fc = 0;
            for (int k = 0; k < c; k++) {
                if (mat[i][k] == 1 && k != j) {
                    fr = 1;
                    break;
                }
            }
            for (int k = 0; k < r; k++) {
                if (mat[k][j] == 1 && k != i) {
                    fc = 1;
                    break;
                }
            }
            if (fr == 0 && fc == 0) {
                res += 1;
            }
       }
       return res;
    }
};