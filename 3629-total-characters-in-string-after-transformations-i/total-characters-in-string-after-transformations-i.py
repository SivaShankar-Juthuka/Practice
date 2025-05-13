class Solution:
    def lengthAfterTransformations(self, s: str, t: int) -> int:
        l1 = [0] * 26
        mod = 10**9 + 7

        for i in s:
            l1[ord(i) - 97] += 1
        
        while t:
            l2 = [0] * 26

            for i in range(2, 26):
                l2[i] = l1[i-1]
            
            l2[0] = l1[25]
            l2[1] = (l1[25] + l1[0]) % mod
            l1 = l2
            t -= 1
        return sum(l1) % mod