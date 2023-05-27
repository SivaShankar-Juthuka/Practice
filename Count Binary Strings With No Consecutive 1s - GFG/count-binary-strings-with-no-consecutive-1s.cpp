//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
const int32_t mod = 1e9+7;
class Solution {
  public:
    struct Matrix{
	    long long int a[2][2];	
    };
    Matrix identity(){
    	Matrix id;
    	id.a[0][0]=1 ,id.a[0][1]=0;
    	id.a[1][0]=0 ,id.a[1][1]=1;
    	return id;
    }
    Matrix mul(Matrix A,Matrix B){
	    Matrix C;
	    for(long long int row = 0 ; row < 2 ; row++){
    		for(long long int col = 0; col < 2 ; col++){
			    long long int sum =0;
			    for(long long int i = 0 ; i < 2; i++){
    				sum+=((A.a[row][i] % mod) * (B.a[i][col]%mod)) % mod;
	    		}
		    	C.a[row][col] = sum % mod;
		    }
	    }
	    return C;
    }
    Matrix Matrixexp(Matrix A,long long int exp){
    	if(exp==0)return identity();
        	Matrix ans = Matrixexp(A,exp/2);
    	if(exp%2==0){
		    return mul(ans,ans);
	    }
	    else{
		    return mul(mul(ans,ans),A);
	    }   
    }
    
    int countStrings(long long int N) {
        // Code here
        Matrix res;
        res.a[0][0] = 1, res.a[0][1]= 1;
        res.a[1][0] = 1, res.a[1][1]= 0;
        Matrix res1 = Matrixexp(res, N+1);
        // cout<<res1.a[0][0]<<" "<<res1.a[0][1]<<"\n";
        // cout<<res1.a[1][0]<<" "<<res1.a[1][1];
        return res1.a[0][0]%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int N;
        cin >> N;
        Solution obj;
        cout << obj.countStrings(N) << endl;
    }
}
// } Driver Code Ends