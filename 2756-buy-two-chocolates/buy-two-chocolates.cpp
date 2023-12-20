class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(), prices.end());
        for(int i = 0; i<n-1; i++){
            if(money >= (prices[i] + prices[i+1])){
                return money -(prices[i] + prices[i+1]);
            }
            cout<<prices[i]<<" "<<prices[i+1]<<"\n";
        }
        return money;
    }
    
};