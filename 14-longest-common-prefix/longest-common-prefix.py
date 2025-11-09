class Solution:
    def compare(self, str1, str2):
        ans = ""
        s1, s2 = len(str1), len(str2)
        n = max(s1, s2)
        if str2 != "" and str1[0] != str2[0]:
            return ans
        
        for i in range(0, n):
            if i < s1 and i < s2 and str1[i] == str2[i]:
                ans += str1[i]
            else:
                break
        
        return ans

    def longestCommonPrefix(self, strs: List[str]) -> str:
        str_size = len(strs)
        res = strs[0]
        if str_size == 0:
            return ""
        
        else:
            for word in strs[1:]:
                if len(res):
                    res = self.compare(res, word)
                else:
                    return ""

        return res