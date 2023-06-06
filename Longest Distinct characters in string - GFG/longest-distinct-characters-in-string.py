#User function Template for python3

class Solution:

    def longestSubstrDistinctChars(self, S):
        # code here
        s = ""
        res = -100000
        i = 0
        while i < len(S):
            if S[i] not in s:
                s += S[i]
                if i == len(S)-1 and len(s) > res:
                    res = len(s)
            else:
                i -= len(s)
                if len(s) > res:
                    res = len(s)
                s = ""
            i += 1
        return res
        
        
        # lst = []
        # maxlen = -10000
        # i = 0
        # while i < len(S):
        #     if S[i] not in lst:
        #         lst.append(S[i])
        #         if i == len(S)-1 and len(lst) >maxlen:
        #             maxlen = len(lst)
        #     else:
        #         S1,lst = lst,[]    
        #         i -= len(S1)
        #         if len(S1) > maxlen:
        #             maxlen = len(S1)
        #     i += 1
        # return maxlen
        
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        S = input()

        solObj = Solution()

        ans = solObj.longestSubstrDistinctChars(S)

        print(ans)

# } Driver Code Ends