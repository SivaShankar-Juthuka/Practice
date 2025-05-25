class Solution:
    def longestPalindrome(self, words: List[str]) -> int:
        count = Counter(words)
        res = 0
        used_center = False

        for word in list(count.keys()):
            rev = word[::-1]
            if word == rev:
                pairs = count[word] // 2
                res += pairs * 4
                count[word] -= pairs * 2
            else:
                if rev in count:
                    pairs = min(count[word], count[rev])
                    res += pairs * 4
                    count[word] -= pairs
                    count[rev] -= pairs

        for word in count:
            if word[0] == word[1] and count[word] > 0:
                res += 2
                break

        return res