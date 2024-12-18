class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i = 0, j = 1, n = prices.size();
        vector<int> res;
        while(i < n) {
            if(prices[i] >= prices[j] and i < j) {
                res.emplace_back(prices[i] - prices[j]);
                i += 1;
                j = i +1;
            }
            else if(prices[i] <= prices[j] and j == n-1){
                res.emplace_back(prices[i]);
                i += 1;
                j = i+1;
            }
            else{
                j += 1;
            }
            if(j == n) {
                j = n-1;
            }
        }
        return (res.size() == 0) ? prices : res;
    }
};