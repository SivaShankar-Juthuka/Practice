class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        fre, res = [], []
        cnt = 0
        vowels = "aeiou"
        for word in words:
            if word[0] in vowels and word[len(word) - 1] in vowels:
                cnt += 1
            fre.append(cnt)
                
        for l, r in queries:
            if l == 0:
                res.append(fre[r])
            else:
                res.append(fre[r] - fre[l - 1])
    
        return res     