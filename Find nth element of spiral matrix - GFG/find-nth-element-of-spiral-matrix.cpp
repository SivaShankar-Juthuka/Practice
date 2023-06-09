//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int findK(int [MAX][MAX],int ,int ,int );
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends


/*You are required to complete this method*/
int findK(int A[MAX][MAX], int n, int m, int k)
{
//Your code here
    int top = n, down = n, right = m, left = m, i = 0, j= 0, flag = 0;
    vector<int>v;
    while(top and right and down and left){
        for(int k = 0; k< right ; k++){
            v.emplace_back(A[i][j++]);
        }
        j -= 1;
        i += 1;
        top -= 1;
        down -= 1;
        if(top == 0 or down == 0 or right == 0 or left == 0){
            break;
        }
        for(int k = 0; k<down ; k++){
            v.emplace_back(A[i++][j]);
        }
        i-= 1;
        j-= 1;
        right -= 1;
        left -= 1;
        if(top == 0 or down == 0 or right == 0 or left == 0){
            break;
        }
        for(int k = 0; k<left ; k++){
            v.emplace_back(A[i][j--]);
        }
        i-= 1;
        j+= 1;
        top -= 1;
        down -= 1;
        if(top == 0 or down == 0 or right == 0 or left == 0){
            break;
        }
        for(int k = 0; k< top; k++){
            v.emplace_back(A[i--][j]);
        }
        i+= 1;
        j+= 1;
        right -= 1;
        left -= 1;
    }
    return v[k-1];
}

