class Solution {
public:
    int solve(int x) {
        long long  res = 0;
        while(x) {
            if(res > INT_MAX/10 || res < INT_MIN/10)  return 0;
            res = res * 10 + (x % 10);
            x /= 10;
        }
        return res;
    }
    int reverse(int x) {
        return solve(x);
    }
};