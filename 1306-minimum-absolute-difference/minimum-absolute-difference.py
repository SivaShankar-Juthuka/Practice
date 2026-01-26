class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        s_l = sorted(arr)
        min_val = (10**6) + 1
        for i in range(1, len(arr)):
            if s_l[i] - s_l[i-1] < min_val:
                min_val = s_l[i] - s_l[i-1]
        # print(min_val)
        res = []
        for i in range(1, len(arr)):
            if (s_l[i] - s_l[i-1]) == min_val:
                res.append([s_l[i-1], s_l[i]])
        return res