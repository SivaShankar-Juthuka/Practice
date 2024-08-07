class Solution {
public:
    void solve(vector<int> &fs, int n, int s){
        if(n == 0) return;
        fs.emplace_back(fs[s - 1] + fs[s - 2]);
        solve(fs, n - 1, s + 1); 
    }
    int fib(int n) {
        if( n == 0) return 0;
        if(n == 1 or n == 2) return 1;
        vector<int> fs = {1, 1};
        solve(fs, n-2, 2);
        return fs[n-1];
    }
};