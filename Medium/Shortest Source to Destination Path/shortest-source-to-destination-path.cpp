//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     bool isValid(int x, int y, int N, int M, vector<vector<bool>>& visited, vector<vector<int>>& A) {
        return 0 <= x && x < N && 0 <= y && y < M && A[x][y] == 1 && !visited[x][y];
    }
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code her
        if (A[0][0] == 0 || A[X][Y] == 0) {
            return -1;
        }
        vector<int> dx = {1, -1, 0, 0};
        vector<int> dy = {0, 0, 1, -1};
        vector<vector<bool>> visited(N, vector<bool>(M, false));
        queue<tuple<int, int, int>> q;
        q.push(make_tuple(0, 0, 0));
        visited[0][0] = true;
        while (!q.empty()) {
            int x, y, steps;
            tie(x, y, steps) = q.front();
            q.pop();
            if (x == X && y == Y) {
                return steps;
            }
            for (int i = 0; i < 4; i++) {
                int new_x = x + dx[i];
                int new_y = y + dy[i];
                if (isValid(new_x, new_y, N, M, visited, A)) {
                    visited[new_x][new_y] = true;
                    q.push(make_tuple(new_x, new_y, steps + 1));
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends