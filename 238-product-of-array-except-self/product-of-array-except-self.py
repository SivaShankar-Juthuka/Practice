class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        si = len(nums)
        p, flag = 1, 0
        for i in range(si):
            if nums[i] != 0:
                p *= nums[i]
            else:
                flag += 1
        res = []
        for i in range(si):
            if flag > 1:
                res.append(0)
            elif nums[i] != 0 and flag == 0:
                res.append(p // nums[i])
            else:
                if nums[i] != 0:
                    res.append(0 // p)
                else:
                    res.append(p)
        return res
