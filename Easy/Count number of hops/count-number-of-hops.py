#User function Template for python3

class Solution:
    #Function to count the number of ways in which frog can reach the top.
    def countWays(self,n):
        # code here
        if n == 1: return 1
        if n == 2: return 2
        l = [1, 2, 4]
        for i in range(3, n):
            l.append((l[i-3]+l[i-2]+l[i-1])%(10**9 + 7))
        # print(l)
        return l[-1]


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys
sys.setrecursionlimit(10**6)
# Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        m = int(input())
        ob=Solution()
        print(ob.countWays(m))
# } Driver Code Ends