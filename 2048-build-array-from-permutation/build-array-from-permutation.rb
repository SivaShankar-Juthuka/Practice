# @param {Integer[]} nums
# @return {Integer[]}
def build_array(nums)
    ans = Array.new(nums.size)
    for i in 0...nums.size do
        ans[i] = nums[nums[i]]
    end
    return ans
end