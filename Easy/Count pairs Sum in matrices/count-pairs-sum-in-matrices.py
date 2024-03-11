#User function Template for python3
class Solution:
	def countPairs(self, mat1, mat2, n, x):
		#code here
	    m1i, m1j, m2i, m2j = 0, 0, n-1, n-1
	    res = 0
		while m1i < n and m1j < n and m2i >= 0 and m2j >= 0:
		    if (mat1[m1i][m1j] + mat2[m2i][m2j]) == x:
		        res += 1
		        m1j += 1
		        if m1j >= n:
		            m1i += 1
		            m1j = 0
		    elif (mat1[m1i][m1j] + mat2[m2i][m2j]) > x:
		        
		        m2j -= 1
		        if m2j < 0:
		            m2j = n-1
		            m2i -= 1
		    elif (mat1[m1i][m1j] + mat2[m2i][m2j]) < x:
		        m1j += 1
		        if m1j >= n:
		            m1i += 1
		            m1j = 0
		return res

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n , x = input().split()
		n,x = int(n), int(x)
		mat1 = []
		for _ in range(n):
			a = [int(x) for x in input().split()]
			mat1.append(a)

		mat2 = []
		for _ in range(n):
			a = [int(x) for x in input().split()]
			mat2.append(a)

		ob = Solution()
		ans = ob.countPairs(mat1, mat2, n, x)
		print(ans)

# } Driver Code Ends