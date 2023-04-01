'''
You are given an integer N. Consider an array arr having N elements where arr[i] = 2*i+1. (The array is 0-indexed)
You are allowed to perform the given operation on the array any number of times:
1) Select two indices i and j and increase arr[i] by 1 and decrease arr[j] by 1.
Your task is to find the minimum number of such operations required to make all the elements of the array equal.
'''
#####################################################################################################################################################

long long int minOperations(int N) {
        // Code here
        long long res = N/2;
        if(N%2 == 0){
            return res*res;       # 1 3 5 7 9 11    a[mid]=  (5+7)/2 = 6   5 3 1 -1 -3 -5
        }                         # 1 2 3 4 5  6    mid = 3                5+ 3+ 1 = 9       (3*3)
        else{
            return res*(res+1);   # 1 3 5 7 9     a[mid] = 5    4 2 0 -2 -4
        }                         # 1 2 3 4 5     mid = 2       4 + 2 = 6         6 = 2*(2+1)   
    }
