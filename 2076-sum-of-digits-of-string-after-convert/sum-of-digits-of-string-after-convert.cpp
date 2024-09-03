class Solution {
public:
    int digitsum(int n) {
        int sum = 0;
        while(n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        int n = 0;
        for(int i = 0; i < s.size(); i++) {
            int val = s[i] -'a' + 1;
            if(val > 9) {
                n += val%10 + val/10;
            }
            else{
                n += val;
            }
        }
        k -= 1;
        while(k) {
            n = digitsum(n);
            k -= 1;
        }
        return n;
    }
};