class Solution {
public:
int solve(vector<int> ones, int ind) {
    int sum = 0;
    for(int i = 0; i < ones.size(); i ++) {
        sum += abs(ones[i] - ind);
    }
    return sum;
}
    vector<int> minOperations(string boxes) {
        vector<int> res;
        vector<int> ones;
        int n = boxes.size(), total =0;
        for(int i = 0; i < boxes.size(); i++) {
            if(boxes[i] == '1') ones.emplace_back(i);
        }

        for(int i = 0; i < boxes.length(); i++) {
            int temp = solve(ones, i);
            res.emplace_back(temp);
        }
        return res;
    }
};