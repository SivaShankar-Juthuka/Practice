class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        # 1 2 3 4 5 6
        nums = sorted(nums)
        return nums[len(nums) - k]