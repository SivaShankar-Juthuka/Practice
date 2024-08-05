class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        else{
            long long  res = 0, n = x;
            while(x) {
                // if(res > INT_MAX/10 || res < INT_MIN/10)  return 0;
                int rem = x % 10;
                res = res * 10 + rem;
                x /= 10;
                // cout << res << "\n";
            }
            return n == res;
        }
    }
};