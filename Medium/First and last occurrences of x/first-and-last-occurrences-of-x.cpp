//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        map<int, vector<int>>mp;
        int flag = 0;
        for(int i = 0; i< n; i++){
            if(arr[i] == x){
                mp[arr[i]].emplace_back(i);
                flag = 1;
            }
        }
        if(flag == 1){
            return {mp[x][0], mp[x].back()};
        }
        return {-1, -1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends