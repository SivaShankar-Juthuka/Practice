class Solution {
public:
    int solve(vector<vector<int>>& img, int row, int col){
        int n = img.size(), m = img[0].size();
        int cnt = 0;
        float res = 0;
        for(int i=-1 ; i<=1 ; i++){
            for(int j=-1 ; j<=1;j++){
                int nrow = row+i;
                int ncol = col + j;
                if(nrow>= 0 && nrow < n && ncol >= 0 && ncol< m){
                    cnt++;
                    res += img[nrow][ncol];
                }
            }
        }
        float ans = res/cnt;    
            return ans;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size(), m = img[0].size();
        vector<vector<int>> ans;
        for(int i = 0 ; i < n ; i++){
            vector<int> t;
            for(int j = 0 ; j < m ; j++){
                t.push_back(solve(img, i, j));
            }
            ans.push_back(t);
        }
        return ans;
    }
};