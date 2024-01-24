//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    int solve(int n, vector<int>&kp, vector<int>&Tp, vector<vector<int>>vis){
        int xcord[] = {-2, -1, 1, 2, 1, 2, -2, -1};
        int ycord[] = {-1, -2, -2, -1, 2, 1, 1, 2};
        queue<vector<int>>q;
        q.push({kp[0], kp[1], 0});
        vis[kp[0]][kp[1]] = 1;
        while(!q.empty()){
            int x = q.front()[0];
            int y = q.front()[1];
            int steps = q.front()[2];
            if(x == Tp[0] and y == Tp[1]) return steps;
            q.pop();
            for(int i = 0; i<8; i++){
                int k = x + xcord[i];
                int l = y + ycord[i];
                if( k >= 0 and l >= 0 and k < n and l < n and !vis[k][l] ){
                    vis[k][l] = 1;
                    q.push({k, l, steps +1});
                }
            }
            
        }
        return -1;
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    if(KnightPos[0] == TargetPos[0] and KnightPos[1] == TargetPos[1]) return 0;
	    vector<vector<int>>vis(N, vector<int>(N, 0));
	    KnightPos[0] -= 1;
	    KnightPos[1] -= 1;
	    TargetPos[0] -= 1;
	    TargetPos[1] -= 1;
	    
	    return solve(N, KnightPos, TargetPos, vis);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends