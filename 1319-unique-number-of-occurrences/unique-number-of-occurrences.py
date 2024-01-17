class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        s = set(arr)
        d = {}
        for i in s:
            d.update({i:arr.count(i)})
        s1 = set(d.values())
        s2 = list(d.values())
        if(len(s1) == len(s2)):
            return True
        else:
            return False