class Solution {
public:
    int fun(int y, int x, string z) {
        if (z == "+") return y + x;
        if (z == "-") return y - x;
        if (z == "*") return y * x;
        if (z == "/") return y / x;
        return 0;
    }

    int solve(vector<string>& tokens) {
        int n = tokens.size(), k = 0;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if(tokens[i] == "+" or tokens[i] == "-" or tokens[i] == "*" or tokens[i] == "/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(fun(b, a, tokens[i]));
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }

    int evalRPN(vector<string>& tokens) {
        return solve(tokens);
    }
};
