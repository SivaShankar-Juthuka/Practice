class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        arr = sorted(arr)
        dic = {}
        for i in arr:
            if i not in dic:
                dic[i] = 1
            else:
                dic[i] += 1
        l = sorted(arr, key = lambda i : dic[i])
        return len(set(l[k:])) 