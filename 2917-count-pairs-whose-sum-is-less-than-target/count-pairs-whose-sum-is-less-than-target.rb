# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer}
def count_pairs(nums, target)
    # res = 0
    # for i in 0...nums.length 
    #     for j in i+1...nums.length
    #         res += ((target > (nums[i]+nums[j])) ? 1: 0)
    #     end
    # end
    # res
    nums.combination(2).count { |pair| pair.sum < target }
end