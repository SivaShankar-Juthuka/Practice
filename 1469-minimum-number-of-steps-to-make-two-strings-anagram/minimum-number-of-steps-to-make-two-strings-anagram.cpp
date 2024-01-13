class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> sc(26, 0);
        vector<int> tc(26, 0);
        for (char ch : s) {
            sc[ch - 'a']++;
        }
        for (char ch : t) {
            tc[ch - 'a']++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            cnt += abs(sc[i] - tc[i]);
        }
        return cnt / 2;  
    }
};