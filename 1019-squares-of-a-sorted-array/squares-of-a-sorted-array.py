class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        l = sorted([i*i for i in nums])
        return l
        