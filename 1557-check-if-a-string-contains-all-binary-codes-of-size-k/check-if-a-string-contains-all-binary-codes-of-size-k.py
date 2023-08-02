class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        if k > len(s): return False
        l = []
        i, j, m = 0, k, len(s)+1
        while j != m:
            l.append(s[i:j])
            j += 1
            i += 1
        # print(l)
        if len(set(l)) == 2**k : return True
        return False