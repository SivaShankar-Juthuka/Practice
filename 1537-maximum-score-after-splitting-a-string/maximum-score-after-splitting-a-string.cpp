class Solution {
public:
    int maxScore(string s) {
       if (s.find('0') == string::npos) return s.length() - 1;
        if (s.find('1') == string::npos) return s.length() - 1;
        int mx = 0;
        for (size_t i = 0; i < s.length() - 1; ++i) {
            mx = max(mx, static_cast<int>(count(s.begin(), s.begin() + i + 1, '0')) +
                            static_cast<int>(count(s.begin() + i + 1, s.end(), '1')));
        }
        return mx;
    }
};