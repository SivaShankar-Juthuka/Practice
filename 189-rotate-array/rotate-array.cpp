class Solution {
public:
    // void printarr(vector<int> nums, int l) {
    //     cout << l << " --> ";
    //     for(int i =0; i<nums.size(); i++){
    //         cout << nums[i] << " ";
    //     }
    //     cout << "\n";
    // }
    void rotate(vector<int>& nums, int k) {
        // int i = 0, j = nums.size() - 1, l = 0;
        // while(k > 0) {
        //     int key = nums[j];
        //     nums.erase(nums.begin() + j);
        //     l += 1;
        //     nums.insert(nums.begin(), key);
        //     l += 1;
        //     k -= 1;
        // }
        
        if(k > nums.size()) k = k % nums.size();
        reverse(nums.begin() , nums.end()-k);
        reverse(nums.begin() , nums.end());
        reverse(nums.begin() , nums.begin()+k);
    }
};