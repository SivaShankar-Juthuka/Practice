# @param {String[]} words
# @param {Character} x
# @return {Integer[]}
def find_words_containing(words, x)
    ans = Array.new
    for i in 0...words.length do
        if words[i].include?(x)
            ans << i
        end
    end
    ans
end