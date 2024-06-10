class Solution:
    def heightChecker(self, height: List[int]) -> int:
        l = sorted(height)
        cnt = 0
        for i in range(len(l)):
            if height[i] != l[i]:
                cnt += 1    
        return cnt