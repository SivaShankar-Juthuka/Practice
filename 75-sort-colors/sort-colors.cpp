class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low = 0, mid = 0, high = arr.size()-1;
        while(mid <= high) {
            if(arr[mid] == 0) {
                swap(arr[low], arr[mid]);
                mid += 1;
                low += 1;
            }
            else if(arr[mid] == 1) {
                mid += 1;
            }
            else {
                swap(arr[high], arr[mid]);
                high -= 1;
            }
        }
    }
};