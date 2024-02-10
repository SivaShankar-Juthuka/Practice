class Solution:
    def countSubstrings(self, s: str) -> int:
        i, n = 0, len(s)
        j = i + 1
        res = -1
        while(i <= n):
            k = s[i:j]
            # print(k, res)
            if(k == k[::-1]):
                # print(k[::-1])
                res += 1
                # print(k, res, end = "\n")
            j += 1
            if j > n:
                i += 1
                j = i + 1
        return res
