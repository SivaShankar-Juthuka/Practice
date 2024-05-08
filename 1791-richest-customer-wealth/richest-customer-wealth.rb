# @param {Integer[][]} accounts
# @return {Integer}
def maximum_wealth(accounts)
    l = []
    for i in 0...accounts.length do
        l << accounts[i].to_a.sum
    end
    l.max
end