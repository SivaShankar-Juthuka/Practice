class Solution:
    def romanToInt(self, s: str) -> int:
        val = {'I': 1, 'V': 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        res = 0
        flag = False
        prev = ''

        for i in range(len(s)-1, -1, -1):
            if flag == False:
                if s[i] != 'I':
                    res += val[s[i]]
                    prev = s[i]
                    flag = True
                else:
                    res += 1
                    flag = False
                # print(res, "flag: ", flag, prev)
            elif (flag == True) and (prev == 'V' or prev == 'X') and s[i] == 'I':
                res -= 1
                flag = False
                prev = 'I'
                # print(res, "- 5 and 10 flag: ", flag, prev)
            elif (flag == True) and (prev == 'L' or prev == 'C') and s[i] == 'X':
                res -= 10
                flag = True
                prev = 'X'
                # print(res, " - 50 and 100 flag: ", flag, prev)
            elif (flag == True) and (prev == 'D' or prev == 'M') and s[i] == 'C':
                res -= 100
                flag = True
                prev = 'C'
                # print(res, " - 500 and 1000 flag: ", flag, prev)
            else:
                if s[i] != 'I':
                    res += val[s[i]]
                    prev = s[i]
                    flag = True
                else:
                    res += 1
                    flag = False
                # print(res)
        return res