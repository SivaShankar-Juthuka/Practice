class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double res;
        
        for(int i=0; i<nums2.size() ; i++){
            nums1.emplace_back(nums2[i]);
        }
        sort(nums1.begin() , nums1.end());
        int n=nums1.size();
        if(n%2){
            int x=n/2;
            res=nums1[x];
        }
        else{
            int x=n/2;
            int i=x-1;
            res=(nums1[x]+nums1[i])/2.0;
        }
        return res;
    }
};