class Solution:
    def maxScore(self, s: str) -> int:
        if '0' not in s: return len(s)-1
        if '1' not in s: return len(s)-1
        mx = 0
        for i in range(len(s)-1):
            mx = max(mx, (s[:i+1].count('0')+s[i+1:].count('1')))
        return mx