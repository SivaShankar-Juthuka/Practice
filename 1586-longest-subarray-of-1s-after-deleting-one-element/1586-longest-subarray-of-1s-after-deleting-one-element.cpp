class Solution {
public:
    int longestSubarray(vector<int>& arr) {
        int i=0,f=0,res=0,j=0, n = arr.size();
        int m = 1;
        while(i<n){
            if(arr[i]==0){
                f+=1;
            }
            while(f>m){
                if(arr[j]==0){
                    f-=1;
                }
                j+=1;
            }
            res=max(res,i-j+1);
            i++;
        }
        return res -1;
    }
};