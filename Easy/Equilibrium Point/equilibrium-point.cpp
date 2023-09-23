//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
        // Your code here
        if(n == 1)
            return 1;
        int vec[n], tec[n];
        long long s1=0,s2=0;
        
        for(int i=0 ; i<n ; i++){
            s1 += a[i];
            vec[i] = s1;
            s2 += a[n-1-i];
            tec[i] = s2;
        }
        for(int i=1 ; i<n-1 ; i++){
            if(vec[i-1] == tec[n-i-2])
                return i+1;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends