import numpy as np
class Solution:
    def isZeroArray(self, nums: List[int], queries: List[List[int]]) -> bool:
        n = len(nums)
        res = [0]*(n+1)

        for q in queries:
            res[q[0]] += 1
            res[q[1]+1]-=1
        
        cur = 0
        for i in range(n):
            cur += res[i]
            if nums[i] > cur:
                return False
        return True
                