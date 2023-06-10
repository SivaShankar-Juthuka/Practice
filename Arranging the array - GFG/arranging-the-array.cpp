//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void merge(int arr[], int l, int m, int r){
            int i, j, k;
            int n1 = m - l + 1;
            int n2 = r - m;
            int L[n1], R[n2];
            for (i = 0; i < n1; i++)
                L[i] = arr[l + i];
            for (j = 0; j < n2; j++)
                R[j] = arr[m + 1 + j];
            i = 0;
            j = 0; 
            k = l; 
            while (i < n1 && L[i] < 0)
                arr[k++] = L[i++];
            while (j < n2 && R[j] < 0)
                arr[k++] = R[j++];
            while (i < n1)
                arr[k++] = L[i++];
            while (j < n2)
                arr[k++] = R[j++];
        }
        void rearrange(int arr[], int i, int j){
            if(i< j){
                int m = (i + j) / 2;
                rearrange(arr, i, m);
                rearrange(arr, m+1, j);
                merge(arr, i, m, j);
            }
        }
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            rearrange(arr, 0, n-1);            
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends