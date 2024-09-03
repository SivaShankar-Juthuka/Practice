class Solution {
public:
    int digitsum(string n) {
        int sum = 0;
        for(int i = 0; i < n.size(); i++) {
            sum +=  n[i] -'0';
        }
        return sum;
    }
    int getLucky(string s, int k) {
        int o = 1;
        map<char, int> mp;
        for(char j = 'a'; j <= 'z'; j++) {
            mp[j] = o;
            o += 1;
        }
        string n = "";
        for(int i = 0; i < s.size(); i++) {
            n += to_string(mp[s[i]]);
            
        }
        while(k) {
            int res = digitsum(n);
            n = to_string(res);
            k -= 1;
        }
        return stoi(n);
    }
};