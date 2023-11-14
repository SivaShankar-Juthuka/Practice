class Solution {
public:
    int countval(int st, int end, string s){
        set<char>v;
        for(int i = st+1; i<end; i++){
            v.insert(s[i]);
        }
        return v.size();
    }
    int countPalindromicSubsequence(string s) {
        int n = s.length(), res = 0;
        unordered_map<char, vector<int>>mp;
        for(int i = 0; i < n; i++){
            mp[s[i]].push_back(i);
        }
        for(auto it: mp){
            int st = it.second[0], end = it.second.back();
            res += countval(st, end, s);
            // res += val;
            // cout<<it.first<<" "<<it.second[0]<<" "<<it.second.back()<<" "<<val<<'\n';
        }
        return res;
    }
};