class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char, int>mp;
        int n = words.size();
        if(n == 1) return true;
        for(int i = 0; i<n; i++){
            string s = words[i];
            for(int j = 0; j<s.length(); j++){
                mp[s[j]]++;
            }
        }
        for(auto it : mp){
            if(it.second %n != 0) return false;
        }
        return true;
    }
};