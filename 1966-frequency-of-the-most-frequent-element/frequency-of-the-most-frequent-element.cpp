class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long total = 0;
        int start = 0, maxFreq = 0;

        for (int end = 0; end < nums.size(); ++end) {
            total += nums[end];

            while ((long long)(end - start + 1) * nums[end] > total + k) {
                total -= nums[start];
                start++;
            }

            maxFreq = max(maxFreq, end - start + 1);
        }

        return maxFreq;
    }
};