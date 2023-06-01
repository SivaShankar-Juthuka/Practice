#User function Template for python3
import math as m
class Solution:
    def nCr(self, n, r):
        # code here
        if r > n : return 0
        if n == r : return 1
        if r == 1 : return n
        mod = 10**9 + 7
        a = m.factorial(n)
        b = m.factorial(r)
        c = m.factorial(n-r)    
        return (a//(b*c))% mod
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, r = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.nCr(n, r))
# } Driver Code Ends