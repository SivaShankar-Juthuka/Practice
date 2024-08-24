class Solution {
public:
/*
Find the largest index i such that arr[i] < arr[i + 1]. If no such index exists, the permutation is the last permutation.
Find the largest index j greater than i such that arr[i] < arr[j].
Swap the value of arr[i] with that of arr[j].
Reverse the sequence from arr[i + 1] to the end.

    SET i TO length(arr) - 2
    WHILE i >= 0 AND arr[i] >= arr[i + 1]
        DECREMENT i
    END WHILE

    # If no such index exists, the permutation is the last permutation
    IF i == -1
        RETURN "No next permutation"
    END IF

    # Step 2: Find the largest index j greater than i such that arr[i] < arr[j]
    SET j TO length(arr) - 1
    WHILE arr[j] <= arr[i]
        DECREMENT j
    END WHILE

    # Step 3: Swap the value of arr[i] with that of arr[j]
    SWAP arr[i] WITH arr[j]

    # Step 4: Reverse the sequence from arr[i + 1] to the end
    SET start TO i + 1
    SET end TO length(arr) - 1
    WHILE start < end
        SWAP arr[start] WITH arr[end]
        INCREMENT start
        DECREMENT end
    END WHILE

    RETURN arr
*/
// arr[i] < arr[i + 1]
    void nextPermutation(vector<int>& nums) {
        int bp = -1; 
        // Finding the Break Point to get the longest prefix
        for(int i = nums.size() - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                bp = i;
                break;
            }
        }

        if(bp == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i = nums.size() - 1; i > bp; i--) {
            if(nums[i] > nums[bp]) {
                swap(nums[i], nums[bp]);
                break;
            }
        }

        reverse(nums.begin() + bp + 1, nums.end()); 
    }
};