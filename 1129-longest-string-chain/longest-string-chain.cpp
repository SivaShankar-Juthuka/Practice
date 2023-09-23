class Solution {
public:
    static bool sortByLength(string s1 , string s2){
        return s1.length()<s2.length();
    }
    int longestStrChain(vector<string>& words) {
        int len=0 , k= words.size();
        
        unordered_map<string,int>s;
        sort(words.begin() , words.end() , sortByLength);
        
        for(auto i : words){
            for(int j = 0; j<i.length() ; j++){
                
                string pre=i.substr(0,j) + i.substr(j+1);
                
                s[i]=max(s[i] , s[pre]+1);
            }
            len=max(len , s[i]);
        }
        return len;      
    }
};