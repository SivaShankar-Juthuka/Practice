class Solution:
    def customSortString(self, order: str, s: str) -> str:
        dic = {}
        res = ""
        for i in order:
            if i not in dic:
                dic[i] = 1
        for i in s:
            if i not in dic:
                dic[i] = 1
            else:
                dic[i] += 1
        # print(dic)
        for i in dic.keys():
            if i in s:
                res += i * s.count(i)
        return res