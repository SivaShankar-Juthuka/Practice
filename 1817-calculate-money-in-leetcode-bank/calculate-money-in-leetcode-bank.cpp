class Solution {
public:
    int totalMoney(int n) {
        int res = 0, k = 1;
        while(n != 0){
            for(int i = k; i<k+7; i++){
                if(n == 0) break;
                res += i;
                n -= 1;
                // cout<<i<<" "<<res<<" "<<k<<"\n";
            }
            k += 1;
        }       
        return res;
    }
};