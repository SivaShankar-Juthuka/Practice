class Solution:
    def countSubstrings(self, s: str) -> int:
        i, n = 0, len(s)
        j = i + 1
        res = 0
        while(i <n):
            k = s[i:j]
            if(k == k[::-1]):
                res += 1
            j += 1
            if j > n:
                i += 1
                j = i + 1
        return res
