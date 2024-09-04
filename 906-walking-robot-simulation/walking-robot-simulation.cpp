class Solution {
public:
    struct hash_pair {
        template <class T1, class T2>
        size_t operator() (const pair<T1, T2>& p) const {
            auto hash1 = hash<T1>{}(p.first);
            auto hash2 = hash<T2>{}(p.second);
            return hash1 ^ hash2;
        }
    };

    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_map<pair<int, int>, bool, hash_pair> mp;
        for (const auto& obstacle : obstacles) {
            mp[{obstacle[0], obstacle[1]}] = true;
        }
        vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int dir_index = 0, x = 0, y = 0, max_dist = 0;
        for (int command : commands) {
            if (command == -1) {
                dir_index = (dir_index + 1) % 4;
            } 
            else if (command == -2) {
                dir_index = (dir_index + 3) % 4;
            } 
            else {
                for (int i = 0; i < command; i++) {
                    int newX = x + dir[dir_index].first;
                    int newY = y + dir[dir_index].second;
                    if (mp.find({newX, newY}) == mp.end()) {
                        x = newX;
                        y = newY;
                        max_dist = max(max_dist, x*x + y*y);
                    } 
                    else {
                        break;
                    }
                }
            }
        }
        return max_dist;
    }
};