class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0, n = gain.size(), m = 0;
        for(int i = 0; i<n; i++){
            res += gain[i];
            m = max(m, res);
        }
        return m;
    }
};