/*
Given a string s, partition the string into one or more substrings such that the characters in each substring are unique. That is, no letter appears in a single substring more than once.

Return the minimum number of substrings in such a partition.

Note that each character should belong to exactly one substring in a partition.
*/


int partitionString(string s) {
        int n = s.size(), cnt = 1;
        set<int>st;
        for (int i=0; i<n; i++){
            if (st.find(s[i])!=st.end()){
                cnt++;
                st.clear();
            }
            st.insert(s[i]);     
        }
        return cnt;
    }
