class Solution:
	def countSubstring(self, s):
		# code here
		res = 0
		dic = {}
		
		for i in s:
		    if i in dic:
		        res += dic[i]
		        dic[i] += 1
		    else:
		        dic[i] = 1
		    
		return res+len(s)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        s = input()

        ob = Solution()
        answer = ob.countSubstring(s)

        print(answer)
        print("~")

# } Driver Code Ends