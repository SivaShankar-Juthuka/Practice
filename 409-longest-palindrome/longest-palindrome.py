class Solution:
    def longestPalindrome(self, s: str) -> int:
        if len(s) == 1:
            return 1
        dic = {}
        n = len(s)
        for i in s:
            if i not in dic:
                dic[i] = 1
            else:
                dic[i] += 1
        res, rem = 0, 0
        dc, sc = 0, 0
        for i in dic.keys():
            if dic[i] % 2:
                if dic[i] > 1:
                    dc += (dic[i]//2)*2
                    rem += dic[i] - ((dic[i]//2)*2)
                else:
                    sc += 1
            else:
                res += dic[i]
        if sc >= 1:
            res += 1
        else:
            if rem >= 1:
                dc += 1
        return res + dc 