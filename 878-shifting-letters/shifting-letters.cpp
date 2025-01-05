class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        // a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
        // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
        string res = "";
        int n = shifts.size();
        vector<long long int> sfs(n, 0);
        sfs[n-1] = shifts[n-1];
        for(int i = n-2; i >= 0; i--) {
           sfs[i] = sfs[i+1] + shifts[i];
        }
        
        for(int i = 0; i < s.length(); i++) {
            res += char('a' + ((s[i] - 'a' + sfs[i]) % 26));
        }

        return res;
    }
};