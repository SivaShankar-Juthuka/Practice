class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        def two(s1, s2):
            l = []
            for i in range(len(s1)):
                for j in range(len(s2)):
                    k = ""
                    k += str(s1[i]) + str(s2[j])
                    l.append(k)     
            return l

        def three(s1, s2, s3):
            l = []
            for i in range(len(s1)):
                for j in range(len(s2)):
                    for m in range(len(s3)):
                        k = ""
                        k += str(s1[i]) + str(s2[j]) + str(s3[m])
                        l.append(k)     
            return l

        def four(s1, s2, s3, s4):
            l = []
            for i in range(len(s1)):
                for j in range(len(s2)):
                    for p in range(len(s3)):
                        for o in range(len(s4)):
                            k = ""
                            k += str(s1[i]) + str(s2[j]) + str(s3[p]) + str(s4[o])
                            l.append(k)   
            return l

        dic = {'2':"abc", '3':'def', '4':'ghi', '5':'jkl', '6':'mno', '7':'pqrs', '8':'tuv', '9':'wxyz'}
        if len(digits) == 0:
            return []
        elif len(digits) == 1:
            l = []
            for i in dic[digits[0]]:
                l.append(str(i))
            return l
        elif len(digits) == 2:
            return two(dic[digits[0]], dic[digits[1]])
        elif len(digits) == 3:
            return three(dic[digits[0]], dic[digits[1]], dic[digits[2]])
        else:
            return four(dic[digits[0]], dic[digits[1]], dic[digits[2]], dic[digits[3]])
        