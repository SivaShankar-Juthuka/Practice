class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip()
        s = s[::-1]
        l = s.split()
        res = []
        for i in l:
            res.append(i[::-1])
        ans = ' '.join(res)
        return ans