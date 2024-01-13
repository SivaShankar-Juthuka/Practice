#User function Template for python3

class Solution:
    def repeatedRows(self, arr, m ,n):
        #code here
        dic = {}
        for i, k in enumerate(arr):
            key = tuple(k)
            if key in dic:
                dic[key].append(i)
            else:
                dic[key] = [i]
        l = []
        for i in dic.keys():
            if len(dic[i]) > 1:
                l += dic[i][1:]
        return sorted(l)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, m = list(map(int, input().strip().split()))
        
        arr = []
        for i in range(n):
            nums = list(map(int, input().strip().split()))
            arr.append(nums)
        ob = Solution()
        ans = ob.repeatedRows(arr, n, m)
        
        for x in ans:
            print(x, end=" ")
            
        print()
        tc -= 1

# } Driver Code Ends