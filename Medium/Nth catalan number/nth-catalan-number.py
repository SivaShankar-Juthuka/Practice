import math as m
class Solution:
    def findCatalan(self, n : int) -> int:
        # code here
        if n <= 1:
            return 1

        MOD = 10**9 + 7
        c = [0] * (n + 1)
        c[0] = c[1] = 1

        for i in range(2, n + 1):
            for j in range(i):
                c[i] = (c[i] + (c[j] * c[i - j - 1])) % MOD

        return c[n]

#{ 
 # Driver Code Starts
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        obj = Solution()
        res = obj.findCatalan(n)
        
        print(res)
        

# } Driver Code Ends