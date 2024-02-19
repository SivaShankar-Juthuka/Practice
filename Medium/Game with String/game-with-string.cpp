//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    // struct cmp {
    // bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
    //     return p1.second < p2.second;
    //     }
    // };
    int minValue(string s, int k){
        // code here
        priority_queue<int>pq;
        map<char, int>mp;
        for(auto it : s){
            mp[it]++;
        }
        for(auto it: mp){
            pq.push(it.second);
            // cout<<pq.top().first<<" "<<pq.top().second<<"\n";
        }
        // cout<<"\n\n\n";
        while(k){
            int x = pq.top();
            x -= 1;
            // cout << x << "\n";
            pq.pop();
            pq.push(x);
            // cout<<pq.top().first<<" "<<pq.top().second<<"\n";
            k -= 1;
        }
        int res = 0;
        while(!pq.empty()){
            int x = pq.top();
            // cout << (pq.top().first) << x << " - ";
            res += pow(x, 2);
            pq.pop();
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends