class Solution:
    def substring(self, s):
        sub = []
        
        for i in range(len(s)):
            for j in range(i, len(s)):
                tmp = s[i:j+1]
                if len(tmp) > 0:
                    sub.append(int(tmp, 10))
        
        return sub
    
    def sumSubstrings(self,s):
        # code here
        
        res = self.substring(s)
        return sum(res)
        