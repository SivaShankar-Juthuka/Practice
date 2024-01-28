//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
   int n = 10000;
    void seive(vector<int>&primes){
        primes[0] = 0;
        primes[1] = 0;
        for(int i = 2; i<primes.size(); i++){
            if(primes[i] == 1){
                for(int j = i*i ; j<n; j+= i){
                    primes[j] = 0;
                }
            }
        }
    }
    int solve(int Num1,int Num2){   
        //code here
        if(Num1 == Num2) return 0;
        vector<int>primes(n, 1);
        seive(primes);
        queue<pair<string, int>> q;
        string s1 = to_string(Num1);
        string s2 = to_string(Num2);
        q.push({s1, 0});
        vector<int> vis(1e5, 0);
        
        while(!q.empty()) {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();
            vis[stoi(word)] = 1;
            if(word == s2)  return steps;
            for(int i = 0; i < word.size(); i++) {
                char ch = word[i];
                for(int j = 0; j < 10; j++) {
                    if(i == 0 and j == 0)   continue;
                    word[i] = char(j + '0');
                    int n = stoi(word);
                    if(primes[n] == 1 and !vis[n]) {
                        vis[n] = 1;
                        q.push({word, steps + 1});
                    }
                }
                
                word[i] = ch;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int Num1,Num2;
      cin>>Num1>>Num2;
      Solution obj;
      int answer=obj.solve(Num1,Num2);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends