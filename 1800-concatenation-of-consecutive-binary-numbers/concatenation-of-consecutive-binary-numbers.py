class Solution:
    def concatenatedBinary(self, n: int) -> int:
        mod = 10 ** 9 + 7
        s = ""
        for i in range(1, n+1):
            s += bin(i)[2:]
        # print(s)
        return int(s, 2) %mod