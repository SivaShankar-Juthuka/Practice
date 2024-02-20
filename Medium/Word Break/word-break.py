#User function Template for python3

class Solution:
    def wordBreak(self, line, dictionary):
        # Complete this function
        def solve(ind, s, dic):
            if ind == len(s):
                return True
            for i in range(ind, len(s)):
                v = s[ind:i+1]
                if v in dic:
                    if solve(i+1, s, dic):
                        return True
            return False
            
        return solve(0, line, dictionary)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	test_case = int(input())

	for _ in range(test_case):
		number_of_elements = int(input())
		dictionary = [word for word in input().strip().split()]
		line = input().strip()
		ob = Solution()
		res = ob.wordBreak(line, dictionary)
		if res:
			print(1)
		else:
			print(0)
# } Driver Code Ends