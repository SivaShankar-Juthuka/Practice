# @param {Integer[]} happiness
# @param {Integer} k
# @return {Integer}
=begin
def decrement(arr, k, max, len)
    if k == 0
        max
    else
        if arr[len] >=0
            max += arr[len]
        end
        dup = arr.map {|i| i < 0 ? i : i - 1}
        decrement(dup[0..len-1], k-1, max, len-1)
    end
end
=end

def maximum_happiness_sum(happiness, k)
    happiness = happiness.sort.reverse
    res = happiness[0]
    len = happiness.length-1
    if len == 0 || (happiness.uniq.length == 1 and res ==1)
        return res
    end
    # happy = happiness.map{|i| i < 0 ? i : i - 1}
    # res += decrement(happy[0..len-1], k-1, 0, len-1)  
    i = 1
    j = 1
    for l in (1...k)
        if i < happiness.length && (happiness[i] - j) > 0
            puts (happiness[i] - j)
            res += (happiness[i] - j)
        end
        j += 1
        i += 1
    end
    res
end
