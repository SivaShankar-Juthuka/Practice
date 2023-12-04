class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        int n = num.length();
        for (int i = 1; i < n - 1; i++) {
            if (num[i - 1] == num[i] && num[i] == num[i + 1]) {
                string s = num.substr(i - 1, 3); // Extract substring of length 3 around index i
                res = (res.empty()) ? s : (s > res) ? s : res;
            }
        }
        return res;
    }
};