class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        d = {}
        for i in arr:
            f = bin(i).count('1')
            d[f] = d.get(f,[]) + [i]
        res = []
        for i in sorted(d.keys()):
            res.extend(sorted(d[i]))
        return res 

        