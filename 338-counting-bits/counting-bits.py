class Solution:
    def countBits(self, n: int) -> List[int]:
        v = []
        for i in range(0, n+1):
            v.append(bin(i).count('1'))
            n -= 1
        return v
                