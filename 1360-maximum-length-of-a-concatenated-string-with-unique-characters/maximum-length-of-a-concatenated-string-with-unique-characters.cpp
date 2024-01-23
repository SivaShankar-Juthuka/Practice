class Solution {
public:
    int ans = 0;
    
    void Fun(vector<string>&arr,int ind,vector<int>v){
        if(ind >= arr.size()){
            int cnt = 0;
            for(auto it:v) if(it == 1) cnt++;
            ans = max(ans,cnt);
            return;
        }
        bool flag = true;
        for(auto it:arr[ind]){
            v[it-'a']++;
            if(v[it-'a'] > 1) flag = false;
        }
        if(flag) Fun(arr,ind+1,v);
        for(auto it:arr[ind]) v[it-'a']--;
        Fun(arr,ind+1,v);
    }
    int maxLength(vector<string>& arr) {
        vector<int>v(26,0);
        Fun(arr,0,v);
        return ans;
    }
};