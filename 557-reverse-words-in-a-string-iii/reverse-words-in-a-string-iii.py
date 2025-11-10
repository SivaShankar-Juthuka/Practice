class Solution:
    def reverseWords(self, s: str) -> str:
        str_lst = s.split(" ")
        str_lst = [word[::-1] for word in str_lst]
        return ' '.join(str_lst)
        