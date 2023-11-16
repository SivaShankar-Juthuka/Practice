class Solution {
public:
    int change(string s) {
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            res += (s[i] - '0') * pow(2, i);
        }
        return res;
    }
    string binary(int n, int size) {
        string res = "";
        
        while (n > 0 || size > 0) {
            res = char('0' + (n % 2)) + res;
            n /= 2;
            size--;
        }
        while (size > 0) {
            res = res + '0';
            size--;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size(), p = nums[0].size(), r = pow(2, p) - 1;
        map<int, bool> mp;
        for (int i = 0; i < n; i++) {
            int val = change(nums[i]);
            mp[val] = true;
        }
        for (int i = 0; i <= r; i++) {
            if(mp.find(i) == mp.end()) {
                return binary(i, p);
            }
        }
        return "";
    }
};