class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (k > s.length()) return false;
        unordered_set<string>l;
        int i = 0, j = k, m = s.length() + 1;
        while (j != m) {
            l.insert(s.substr(i, j - i));
            j += 1;
            i += 1;
        }
        if (l.size() == pow(2, k)) return true;
        return false;
        }
};