import math as m
class Solution:
    def nCr(self, n, r):
        # code here
        if r > n : return 0
        if r == 0 or n == r : return 1
        if r == 1 : return n
        
        mod = 10**9 + 7
        
        a = m.factorial(n)
        b = m.factorial(r)
        c = m.factorial(n-r)  
        
        return (a//(b*c))% mod
        
#{ 
 # Driver Code Starts
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        r = int(input())
        ob = Solution()
        print(ob.nCr(n, r))
        print("~")
# } Driver Code Ends