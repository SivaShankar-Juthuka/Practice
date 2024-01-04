//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int solve(vector<int>v){
        vector<int>res(32, 0);
        for(int i= 0; i<v.size(); i++){
            int n = v[i], k = 0;
            while(n){
                if((n&1) == 1) res[k] += 1;
                n = n>>1;
                k += 1;
            }
        }
        int ans = 0;
        for(int i = 0; i<32; i++){
            ans += (res[i]%3)*pow(2, i);
        }
        return ans;
    }
    int singleElement(int arr[] ,int N) {
        // code here
        vector<int>neg, pos;
        int k = 0;
        for(int i = 0; i<N; i++){
            if(arr[i] <0){
                neg.emplace_back(-1*arr[i]);
            }
            else{
                pos.emplace_back(arr[i]);
            }
        }
        int res = 0;
        if(neg.size()%3 == 0){
            res += solve(pos);
        }
        else{
            res += solve(neg);
        }
        return (neg.size()%3 == 0)? res : -1*res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends