import re
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        x = re.search(needle, haystack)
        if x:
            return x.start()
        return -1