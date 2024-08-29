class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /*
            00 01 02        00 10 20 
            10 11 12   ->   01 11 21
            20 21 22        02 12 22
        */
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = i + 1; j < matrix[0].size(); j++) { 
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        int i = 0, j = 0, c = matrix[0].size(), r = matrix.size();
        while(i < r) {
            // reverse the row
            j = 0;
            int k = c - 1;
            while (j < k) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
                j++;
                k--;
            }
            i++;
        }
    }
};