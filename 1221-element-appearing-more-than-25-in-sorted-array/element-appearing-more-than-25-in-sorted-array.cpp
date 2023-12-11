class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size(), qtr = size / 4, cnt = 1;
        int res = arr[0];
        for (int i = 1 ; i < arr.size() ; i++) {
            if ( res == arr[i]) cnt++;
            else cnt = 1;
            if (cnt > qtr) return arr[i];
            res = arr[i];
        }
        return res;
    }
};