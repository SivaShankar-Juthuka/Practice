class Solution {
public:
    bool solve(vector<char> &sc, long long i, long long n){
        if(n <= i) return true;
        if(sc[i] != sc[n]) return false;
        return solve(sc, i + 1, n - 1);
    }

    bool isPalindrome(string s) {
        vector<char> sc;
        for (char c : s) {
            if (isalnum(c)) {
                sc.emplace_back(tolower(c));
            }
        }
        return solve(sc, 0, sc.size() - 1);
        return true;
    }
};