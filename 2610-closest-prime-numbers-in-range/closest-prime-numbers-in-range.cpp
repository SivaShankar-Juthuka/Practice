class Solution {
public:
    bool checkprime(int n) {
        if(n <= 1) return false;
        for(int i = 2; i <= int(sqrt(n)); i++) {
            if(n%i == 0) return false;
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; ++i) {
            if (checkprime(i)) {
                res.push_back(i);
            }
        }

        if (res.size() < 2) {
            return {-1, -1};
        }

        int minDiff = INT_MAX;
        vector<int> result = {res[0], res[1]};

        for (size_t i = 1; i < res.size(); ++i) {
            int diff = res[i] - res[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                result = {res[i - 1], res[i]};
            }
        }

        return result;
    }
};