class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        v = "aeiouAEIOU"
        k = len(s)//2
        cnt1, cnt2 = 0, 0
        for i in range(k):
            if s[i] in v:
                cnt1 += 1
            if s[i+k] in v:
                cnt2 += 1
        return cnt1 == cnt2