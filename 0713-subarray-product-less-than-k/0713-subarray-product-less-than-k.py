class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        cnt = 0
        prod, n = 1, len(nums)
        i, j = 0, 0
        while j < n:
            prod *= nums[j]
            while prod >= k and i <= j:
                prod = prod // nums[i]
                i += 1
            cnt += j - i + 1
            j += 1
        return cnt