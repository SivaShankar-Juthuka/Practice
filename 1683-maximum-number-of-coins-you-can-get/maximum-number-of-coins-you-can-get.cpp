class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int i = 0, j = piles.size()-1, k = j-1, res = 0;
        while(i < k){
            res += piles[k];
            i += 1;
            j = k-1;
            k = j-1;
        }
        return res;
    }
};