class Solution {
public:
    vector<string> res;
    void solve(int op, int cl, int n, string &s){
        if(op == n and cl == n){
            res.emplace_back(s);
            return;
        }
        if(op < n){
            s += "(";
            solve(op +1, cl, n, s);
            s = s.substr(0, s.length() -1);
        }
        if(op > cl){
            s += ")";
            solve(op, cl + 1, n, s);
            s = s.substr(0, s.length()-1);
        }
        return;
        
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        solve(0, 0, n, s);
        return res;
    }
};