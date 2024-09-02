class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        s = sum(chalk)
        r = k % s
        print(r)
        for i in range(len(chalk)):
            if chalk[i] > r:
                return i
            r -= chalk[i]