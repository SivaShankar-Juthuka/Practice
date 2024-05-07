# @param {Integer[]} nums
# @return {Integer[]}
def get_concatenation(nums)
    ans = nums.dup
    for i in nums do
        ans.push(i)
    end
    ans
end