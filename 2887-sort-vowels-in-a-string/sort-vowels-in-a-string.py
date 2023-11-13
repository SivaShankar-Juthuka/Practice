class Solution:
    def sortVowels(self, s: str) -> str:
        l = []
        c = []
        v = 'AEIOUaeiou'
        for i in s:
            if i in v:
                l.append(i)
            else:
                c.append(i)
        l = sorted(l)
        if len(c) == 0:
            return ''.join(l)
        j = 0
        res = ""
        for i in s:
            if i in l:
                res += l[j]
                j += 1
            else:
                res += i
        return res        