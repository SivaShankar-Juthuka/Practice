class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n == 1) return chars.size();
        int i = 1, prev = 0;
        string s = "";
        s += chars[0];
        vector<char> l;
        
        while(i != n) {
            if(chars[i] == s.back()) {
                s += chars[i];
            } else {
                l.push_back(s.back());
                prev = s.size();
                if(prev > 9) {
                    string k = to_string(prev);
                    for(char j : k) {
                        l.push_back(j);
                    }
                } else if(prev != 1) {
                    l.push_back(to_string(prev)[0]);
                }
                s = "";
                s = chars[i];
            }
            i++;
        }
        
        l.push_back(s.back());
        prev = s.size();
        if(prev > 9) {
            string k = to_string(prev);
            for(char i : k) {
                l.push_back(i);
            }
        } else if(prev != 1) {
            l.push_back(to_string(prev)[0]);
        }
        
        chars.clear();
        chars = l;
        l.clear();
        return chars.size();
    }
};