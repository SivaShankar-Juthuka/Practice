class Solution:
    def distributeTicket(self, N : int, K : int) -> int:
        # Code Here
        if K == N-1 : return N
        st, end, cnt, flag = 0, N+1, 0, 0
        j, lp, c1, c2 = 0, 0, 1, 1
        while True:
            if flag == 0:
                c1 = 0
                c2 = 1
                while j != K:
                    st += 1
                    # print(st, end = " - ")
                    cnt += 1
                    if(cnt == N):
                        lp = 1
                        break
                    j += 1
                flag = 1
                j = 0
            # print()
            if lp == 1:
                break
            if flag == 1:
                c2 = 0
                c1 = 1
                while j != K:
                    end -= 1
                    # print(end , end = " * ")
                    cnt += 1
                    if(cnt == N):
                        lp = 1
                        break
                    j += 1
                flag = 0
                j = 0
            # print()
            if lp == 1:
                break
        # print(st, end)
        if c1 == 0: return st
        else: return end

#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    
    N, K = map(int, input().split())
    
    obj = Solution()
    res = obj.distributeTicket(N, K)
    
    print(res)
# } Driver Code Ends