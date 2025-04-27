#User function Template for python3

class Solution:
    def solve(self, val, n, m, pos, dic):
        ans = 0
        k = ord(m) - ord('0')
        carry = 0
        for j in range(n-1, -1, -1):
            v = ord(val[j]) - ord('0')
            multi = (v*k) + carry
            rem = multi%10
            carry = multi //10
            dic[pos] += rem
            pos += 1
        if carry:
            dic[pos] += carry
            carry = 0
            
    def multiplyStrings(self, s1, s2):
        # code here
        # return the product string
        flag = False
        cn = 0
        if s1[0] == '-':
            s1 = s1[1:]
            flag = True
            cn += 1
        if s2[0] == '-':
            s2 = s2[1:]
            flag = True
            cn += 1
            
        n, m = len(s1), len(s2)
        dic = {}
        for i in range(0, n+m+1):
            dic[i] = 0
        pos = 0
        for i in range(m-1, -1, -1):
            self.solve(s1, n, s2[i], pos, dic)
            pos += 1
            
        res = ""
        carry = 0
        for key, value in dic.items():
            val = value+carry
            res += str(val%10)
            carry = val//10    
        
        while carry:
            res += str(carry % 10)
            carry //= 10
        
        res = res.rstrip('0')[::-1]
        if res == "":
            return "0"
        
        if flag == True:
            if cn%2 == 1:
                res = '-'+res
        return res
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        a = input()
        b = input()
        print(Solution().multiplyStrings(a.strip(), b.strip()))

        print("~")

# } Driver Code Ends