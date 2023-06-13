class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), count = 0;
        int right = n, down = n, i = 0, j = 0;
        while(i != n and j != n){
            int cnt = 0, o = i, p = j;
            for(int k = 0; k<n; k++){
                // cout<<o<<" "<<k<<"  --  "<<k<<" "<<p<<endl;
                if(grid[o][k] == grid[k][p]){
                    cnt += 1;
                }
                else{
                    break;
                }
            }
            i+=1;
            if(i == n){
                j+=1;
                i = 0;
            }
            if(cnt == n){
                count += 1;
            }
            // cout<<count<<"\n";
        }
        return count;
    }
};