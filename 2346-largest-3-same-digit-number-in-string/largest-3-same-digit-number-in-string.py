class Solution:
    def largestGoodInteger(self, num: str) -> str:
        s = ""
        res = ""
        n = len(num)
        for i in range(1, n-1, 1):
            if num[i-1] == num[i] and num[i] == num[i+1]:
                s = num[i-1] + num[i] + num[i+1]
                res = s if len(res) == 0 else s if ord(s[0]) > ord(res[0]) else res
        return res
        