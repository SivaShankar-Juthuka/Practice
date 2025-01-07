class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0, j = letters.size() - 1, mid = 0;
        if(letters[j] <= target) return letters[0];

        while(i <= j) {
            mid = i + (j - i) /2;
            if(letters[mid] > target) {
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return letters[i];
    }
};