#User function Template for python3


class Solution:
    def compareFrac (self, str):
        # code here\
        l = str.split(',')
        a = l[0].split('/')
        b = l[1].split('/')
        res1 = int(a[0]) / int(a[1])
        res2 = int(b[0]) / int(b[1])
        # print(res1, res2)
        if res1 > res2:
            return l[0].strip()
        elif res2 > res1:
            return l[1].strip()
        else:
            return "equal"

#{ 
 # Driver Code Starts
#Initial Template for Python 3
import re

if __name__ == '__main__':
    ob = Solution()
    t = int(input())
    for _ in range(t):
        str = input()
        print(ob.compareFrac(str))

# } Driver Code Ends