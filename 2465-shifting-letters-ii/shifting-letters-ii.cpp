class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> ind(s.size() + 1, 0); 

        for (const auto& shift : shifts) {
            int l = shift[0], r = shift[1], direction = shift[2];
            ind[l] += (direction == 1) ? 1 : -1;
            ind[r + 1] += (direction == 1) ? -1 : 1;
        }

        int cumulativeShift = 0;
        for (int i = 0; i < s.size(); ++i) {
            cumulativeShift += ind[i];
            int shift = (s[i] - 'a' + cumulativeShift) % 26; 
            if (shift < 0) shift += 26;                     
            s[i] = 'a' + shift;                             
        }

        return s;
    }
}; 