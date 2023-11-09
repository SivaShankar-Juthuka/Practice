class Solution:
    def countHomogenous(self, s: str) -> int:
        MOD = 10**9 + 7
        count = 0
        ans = 0
        for i in range(len(s)):
            if i > 0 and s[i] == s[i-1]:
                count += 1
            else:
                count = 1
            ans = (ans + count) % MOD
        return ans
        