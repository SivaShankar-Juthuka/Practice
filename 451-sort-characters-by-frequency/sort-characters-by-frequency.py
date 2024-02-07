class Solution:
    def frequencySort(self, s: str) -> str:
        dic = {}
        for i in s:
            if i not in dic:
                dic[i] = 1
            else:
                dic[i] += 1
        dic = dict(sorted(dic.items(), key=lambda item: item[1], reverse=True))
        res = ""
        for i in dic.keys():
            if dic[i] > 1:
                res += (i)*dic[i]
            else:
                res += i
        return res

        
        