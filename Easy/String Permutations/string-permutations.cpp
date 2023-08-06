//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
        //Your code here
        int arr[] = {1, 2, 6, 24, 120};
        int n = S.size();
        vector<string> res;
        for(int i = 0; i<arr[n-1]; i++){
            next_permutation(S.begin(), S.end());
            res.emplace_back(S);
        }
        sort(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends