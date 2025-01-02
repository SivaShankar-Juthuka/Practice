class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> fre, res;
        int cnt = 0;
        string vowels = "aeiou";
        
        for (const auto& word : words) {
            if (vowels.find(word[0]) != string::npos && vowels.find(word[word.length() - 1]) != string::npos) {
                cnt += 1;
            }
            fre.push_back(cnt);
        }
        
        for (const auto& query : queries) {
            int l = query[0], r = query[1];
            if (l == 0) {
                res.push_back(fre[r]);
            } else {
                res.push_back(fre[r] - fre[l - 1]);
            }
        }
        return res;
    }
};