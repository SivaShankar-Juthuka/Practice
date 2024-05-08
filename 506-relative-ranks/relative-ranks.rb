# @param {Integer[]} score
# @return {String[]}
def find_relative_ranks(score)
    n = score.length
    val = Array.new(n, 0)
    # print val, "\n"
    i = 0
    n.times{
        x = score.max
        ind = score.index(x)
        score[ind] = -1
        if i == 0
            val[ind] = "Gold Medal"
        elsif i == 1
            val[ind] = "Silver Medal"
        elsif i == 2
            val[ind] = "Bronze Medal"
        else
            val[ind] = (i+1).to_s
        end
        i += 1
    }
    val
end