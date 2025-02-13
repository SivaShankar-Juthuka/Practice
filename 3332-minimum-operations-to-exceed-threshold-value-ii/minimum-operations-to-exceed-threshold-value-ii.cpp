class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long int , vector<long long int>, greater<long long int>> pq(nums.begin(), nums.end());
        int cnt = 0;
        if(pq.top() >= k) return cnt;
        while(!pq.empty()) {
            long long int v1 = pq.top();
            pq.pop();
            long long int  v2 = pq.top();
            pq.pop();
            long long int tmp = (v1 * 2) + (v2);
            cnt += 1;
            pq.push(tmp);
            if(pq.top() >= k) break;
        }
        return cnt;
    }
};