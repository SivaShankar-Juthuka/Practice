#User function Template for python3

class Solution:
    def findMinOpeartion(self, matrix, n):
        # Code here
        #3 4
        #7 6
        rs = []
        cs = []
        for i in range(n):
            rs.append(sum(matrix[i]))
        for i in range(n):
            res = 0
            for j in range(n):
                res += matrix[j][i]
            cs.append(res)
        rm = max(rs)
        cm = max(cs)
        res = 0
        if rm > cm:
            for i in rs:
                res += (rm - i)
            return res
        else:
            for i in cs:
                res += (cm - i)
            return res


#{ 
 # Driver Code Starts

#Initial Template for Python 3

for _ in range(int(input())):
    n = int(input())
    matrix = [list(map(int,input().split())) for _ in range(n)]
    ob = Solution()
    print(ob.findMinOpeartion(matrix, n))
# } Driver Code Ends