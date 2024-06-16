//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
public:
    vector<bool> array; // Use vector<bool> instead of bool array[]

    void prime(int n) {
        array.resize(n + 1, true); // Resize vector and initialize to true

        if (n >= 0) array[0] = false; // 0 is not prime
        if (n >= 1) array[1] = false; // 1 is not prime

        for (int p = 2; p * p <= n; p++) {
            if (array[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    array[i] = false;
            }
        }
    }

    vector<int> getPrimes(int n) {
        prime(n); // Compute primes up to n
        int i = 1;
        vector<int> res;
        while(i <= n){
            if (array[i] && array[n - i]) {
                res.push_back(i);
                res.push_back(n - i);
            }
            i += 1;
        }
        if(res.size())
            return {res[0], res[1]};
        return {-1, -1};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends