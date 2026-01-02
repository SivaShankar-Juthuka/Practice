class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        n = len(nums)//2
        dic = {}
        for i in nums:
            if i in dic:
                dic[i] += 1
                if dic[i] == n:
                    return i
            else:
                dic[i] = 1
        
        return -1
        