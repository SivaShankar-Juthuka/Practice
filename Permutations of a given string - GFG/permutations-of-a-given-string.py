#User function Template for python3
import math as m
class Solution:
    def find_permutation(self, S):
        # Code here
        def per(s):
            ind = -1
            for i in range(len(s)-2, -1, -1):
                if s[i] < s[i+1]:
                    ind = i
                    break
            if ind == -1:
                s = s[::-1]
                return s
            for i in range(len(s)-1, ind, -1):
                if s[i] > s[ind]:
                    s = s[:ind] + s[i] + s[ind+1:i] + s[ind] + s[i+1:]
                    break
            s = s[:ind+1] + s[ind+1:][::-1]
            return s
        
        n = m.factorial(len(S))
        res =[S]
        while(n):
            p = S
            S = per(p)
            if S not in res:
                res.append(S)
            n -= 1
        return sorted(res)
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		S=input()
		ob = Solution()
		ans = ob.find_permutation(S)
		for i in ans:
			print(i,end=" ")
		print()
# } Driver Code Ends