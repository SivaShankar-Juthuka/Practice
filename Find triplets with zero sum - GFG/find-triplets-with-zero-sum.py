#User function Template for python3

class Solution:
    #Function to find triplets with zero sum.    
    def findTriplets(self, nums, n):
        #code here
        nums.sort()
        fl = 0
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            l = i + 1
            r = len(nums) - 1
            while l < r:
                x = nums[i] + nums[l] + nums[r]
                if x == 0:
                    fl = 1
                    break
                elif x > 0:
                    r -= 1
                else:
                    l += 1
            if fl:
                break
        return 1 if fl == 1 else 0


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n=int(input())
        a=list(map(int,input().strip().split()))
        if(Solution().findTriplets(a,n)):
            print(1)
        else:
            print(0)
# } Driver Code Ends