class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n, 0);
        int sum = 0;
        for(int i =0;i<n-1;i++){
            arr[i]=i+1;
            sum = sum +arr[i];
        }
        arr[n-1]=(-(sum)); 
        return arr;
    }
};