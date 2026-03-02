class Solution:
    def minPartitions(self, n: str) -> int:
        k = 1
        for char in n:
            k = max(k, int(char))
        return k