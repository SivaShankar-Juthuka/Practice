class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i =0, res=0;
        while(i < s.size() && res <g.size()){
            if(s[i]>=g[res]) res++;
            i++;
        }
        return res;
    }
};