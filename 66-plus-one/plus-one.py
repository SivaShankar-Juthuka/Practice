class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        ind = len(digits)
        rem = 0
        if digits[ind - 1] == 9:
            digits[ind - 1] = 0
            rem = 1
        else:
            digits[ind - 1] = digits[ind - 1] + 1
        
        if rem == 0:
            return digits

        for i in range(ind - 2, -1, -1):
            val = digits[i] + rem
            if val >= 10:
                rem = 1
                digits[i] = 0
            else:
                rem = 0
                digits[i] = val
        if rem != 0:
            digits.insert(0, rem)
        return digits