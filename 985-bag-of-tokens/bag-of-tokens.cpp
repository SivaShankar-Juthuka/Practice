class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        if (tokens.empty() || tokens[0] > power) {
            return 0;
        }
        int s = 0, e = tokens.size() - 1;
        int ms = 0, cs = 0;
        while (s <= e) {
            if (tokens[s] <= power) {
                power -= tokens[s];
                cs += 1;
                s += 1;
            } else {
                power += tokens[e];
                cs -= 1;
                e -= 1;
            }
            ms = max(ms, cs);
        }
        return ms;
    }
};