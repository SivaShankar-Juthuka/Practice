class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        on, ze = s.count('1'), s.count('0')
        res = ""
        if on:
            for i in range(on-1):
                res += '1'
            for i in range(ze):
                res += '0'
            res += '1'
            return res
        else:
            return s
        