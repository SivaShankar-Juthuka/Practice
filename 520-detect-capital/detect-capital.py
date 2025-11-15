class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if word == word.capitalize() or word == word.lower() or word.isupper():
            return True

        return False      
        