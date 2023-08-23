#User function Template for python3

class Solution:
	def searchWord(self, grid, word):
	    #code here
        res, n, m, c = [], len(grid), len(grid[0]), False
        for i in range(n):
            for j in range(m):
                if grid[i][j] is word[0]:
                    if len(word) < 2: 
                        c = True
                    for k in range(1,len(word)):
                        c = (i+k < n  and  word[k] is grid[i+k][j])
                        if c is False: 
                            break
                    if c is True: 
                        res.append([i,j])
                        continue
                    for k in range(1,len(word)):
                        c = (j+k < m  and word[k] is grid[i][j+k])
                        if c is False: 
                            break
                    if c is True: 
                        res.append([i,j])
                        continue
                    for k in range(1,len(word)):
                        c = (i-k >= 0 and word[k] is grid[i-k][j])
                        if c is False: 
                            break
                    if c is True: 
                        res.append([i,j])
                        continue
                    for k in range(1,len(word)):
                        c = (j-k >= 0 and word[k] is grid[i][j-k])
                        if c is False: 
                            break
                    if c is True: 
                        res.append([i,j])
                        continue
                    for k in range(1,len(word)):
                        c = (i-k >= 0 and j-k >= 0 and word[k] is grid[i-k][j-k])
                        if c is False: 
                            break
                    if c is True: 
                        res.append([i,j])
                        continue
                    for k in range(1,len(word)):
                        c = (i+k < n and j+k < m and word[k] is grid[i+k][j+k])
                        if c is False: 
                            break
                    if c is True: 
                        res.append([i,j])
                        continue
                    for k in range(1,len(word)):
                        c = (i+k < n and j-k >= 0 and word[k] is grid[i+k][j-k])
                        if c is False: 
                            break
                    if c is True: 
                        res.append([i,j])
                        continue
                    for k in range(1,len(word)):
                        c = (i+k < n and j-k >= 0 and word[k] is grid[i+k][j-k])
                        if c is False: 
                            break
                    if c is True: 
                        res.append([i,j])
                        continue
                    for k in range(1,len(word)):
                        c = (i-k >= 0 and j+k < m and word[k] is grid[i-k][j+k])
                        if c is False: 
                            break
                    if c is True: 
                        res.append([i,j])
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, m = input().split()
		n = int(n); m = int(m);
		grid = []
		for _ in range(n):
			cur  = input()
			temp = []
			for __ in cur:
				temp.append(__)
			grid.append(temp)
		word = input()
		obj = Solution()
		ans = obj.searchWord(grid, word)
		for _ in ans:
			for __ in _:
				print(__, end = " ")
			print()
		if len(ans)==0:
		    print(-1)

# } Driver Code Ends