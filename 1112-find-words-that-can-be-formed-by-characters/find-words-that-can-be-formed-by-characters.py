class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        cnt = 0
        for word in words:
            for i in word:
                if chars.count(i) < word.count(i):
                    break
            else: 
                cnt += len(word)
        return cnt
        