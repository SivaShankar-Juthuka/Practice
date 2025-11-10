class Solution:
    def firstUniqChar(self, s: str) -> int:
        str_dict = {}

        for c in s:
            if c not in str_dict:
                str_dict[c] = 1
            else:
                str_dict[c] += 1
        
        for key, val in str_dict.items():
            if val == 1:
                return s.index(key)
        return -1