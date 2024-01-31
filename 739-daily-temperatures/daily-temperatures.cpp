class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>st;
        vector<int>ans(temp.size(),0);
        ans[temp.size()-1] = 0;
        st.push({temp[temp.size()-1],temp.size()-1});
        for(int i = temp.size()-2 ; i >= 0 ; i--){
            int cnt = 1;
            while(!st.empty() and st.top().first <= temp[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top().second - i;
            }
            st.push({temp[i],i});
        }
        return ans;
    }
};