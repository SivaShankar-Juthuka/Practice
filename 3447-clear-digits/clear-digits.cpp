class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string res = "";
        int i = 0, n = s.length();
        while(i < n) {
            if(s[i] >= 'a' and s[i] <= 'z')
               st.push(s[i]);
            else {
                if(!st.empty()) {
                    st.pop();
                }
            }
            i += 1;
        }
        while(!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};