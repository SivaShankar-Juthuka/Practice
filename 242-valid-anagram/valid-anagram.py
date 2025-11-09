class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        lst1 = [0]*26
        lst2 = [0]*26

        for i in s:
            lst1[ord(i) - 97] += 1
        
        for i in t:
            lst2[ord(i) - 97] += 1
        
        return lst1 == lst2        