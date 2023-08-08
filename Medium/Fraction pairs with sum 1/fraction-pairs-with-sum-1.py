#User function Template for python3

class Solution:
    def countFractions(self, n, num, den):
        # Your code here
        m = {}
        res = 0
        for i in range(n):
            fp = num[i]*1.0/den[i]
            sp = (den[i] - num[i])*1.0/den[i]
            if sp in m:
                res += m[sp]
            m[fp] = m.get(fp, 0) + 1
        return res

#{ 
 # Driver Code Starts

#Initial Template for Python 3

for _ in range(int(input())):
    n = int(input())
    numerator = list(map(int,input().split()))
    denominator = list(map(int,input().split()))
    ob = Solution()
    print(ob.countFractions(n,numerator,denominator))
# } Driver Code Ends