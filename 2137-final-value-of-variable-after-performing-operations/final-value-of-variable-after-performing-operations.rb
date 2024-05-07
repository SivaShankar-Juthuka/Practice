# @param {String[]} operations
# @return {Integer}
def final_value_after_operations(operations)
    cnt = 0
    for i in operations do
        s = "#{i[0, 2]}"
        case s
            when "--"
                cnt -= 1
            when "++"
                cnt += 1
            when "X+"
                cnt += 1
            else
                cnt -=1
        end
    end
    return cnt
end