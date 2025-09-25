class Solution:
    def generateBinary(self, n):
        # code here
        l = []
        
        for i in range(1, n+1):
            l.append(bin(i)[2:])
            
        return l
        