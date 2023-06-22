//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int>& bills) {
        int res = 0, fc = 0, tc = 0, tw = 0;
        for (int i : bills) {
            if (i == 5) {
                fc++;
                res += 5;
            } else {
                res += i;
                int x = i - 5;
                if (x == 5) {
                    tc++;
                    if (fc == 0) {
                        return false;
                    } else {
                        fc--;
                    }
                } else if (x == 15) {
                    tw++;
                    if (res > x) {
                        if (fc == 0) {
                            return false;
                        }
                        res -= x;
                        if (tc) {
                            tc--;
                            fc--;
                        } else if (fc >= 3) {
                            fc -= 3;
                        } else {
                            return false;
                        }
                    } else {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends