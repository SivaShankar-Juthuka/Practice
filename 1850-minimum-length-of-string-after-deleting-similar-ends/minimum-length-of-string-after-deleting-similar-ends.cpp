class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        if(s.length() == 1) return 1;
        int res = INT_MAX;
        if (n%2 == 0 && s == string(s.rbegin(), s.rend())) {
            return 0;
        }
        if (n%2 != 0 && s == string(s.rbegin(), s.rend())) {
            if(s[n/2] != s[(n/2)-1] ) return 1;
            else return 0;
        }
        if (s[0] != s[s.length() - 1]) {
            return s.length();
        }
        else {
            int i = 0, j = s.length() - 1;
            while (i <= j) {
                if (s[i] != s[j]) {
                    res = j - i + 1;
                    break;
                }
                while (s[i] == s[i + 1]) {
                    i += 1;
                }
                while (s[j] == s[j - 1]) {
                    j -= 1;
                }
                // cout << s[i] << " " << s[j] << " " << i << " " << j << " " << res << "\n";
                res = min(res, j - i + 1);
                i += 1;
                j -= 1;
            }
            return res;
        }
    }
};