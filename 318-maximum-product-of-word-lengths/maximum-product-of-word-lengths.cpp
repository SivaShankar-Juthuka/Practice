class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size(); int res = 0;
        vector<int> state(n); 
        for (int i=0;i<n; i++){
            for (char ch: words[i]){
                state[i] |= 1<<(ch-'a');
            }
            for(int j = 0; j<i; j++){
                if(!(state[i] & state[j])){
                    int cur = words[i].size()*words[j].size();
                    res = max(res, cur);
                }
            }
        }
        return res;
    }

};