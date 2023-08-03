class Solution {
public:
    vector<string> two(string s1, string s2) {
        std::vector<std::string> l;
        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                std::string k = "";
                k += s1[i];
                k += s2[j];
                l.push_back(k);
            }
        }
        return l;
    }
    vector<string> three(string s1, string s2, string s3) {
        vector<string> l;
        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                for (int m = 0; m < s3.length(); m++) {
                    string k = "";
                    k += s1[i];
                    k += s2[j];
                    k += s3[m];
                    l.push_back(k);
                }
            }
        }
        return l;
    }

    vector<string> four(string s1, string s2, string s3, string s4) {
        vector<string> l;
        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                for (int p = 0; p < s3.length(); p++) {
                    for (int o = 0; o < s4.length(); o++) {
                        string k = "";
                        k += s1[i];
                        k += s2[j];
                        k += s3[p];
                        k += s4[o];
                        l.push_back(k);
                    }
                }
            }
        }
        return l;
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> dic = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        if (digits.length() == 0) {
            return {};
        } 
        else if (digits.length() == 1) {
            vector<string> l;
            for (char i : dic[digits[0]]) {
                l.push_back(string(1, i));
            }
            return l;
        } 
        else if (digits.length() == 2) {
            return two(dic[digits[0]], dic[digits[1]]);
        } 
        else if (digits.length() == 3) {
            return three(dic[digits[0]], dic[digits[1]], dic[digits[2]]);
        }
        else {
            return four(dic[digits[0]], dic[digits[1]], dic[digits[2]], dic[digits[3]]);
        }
        return {};
    }
};