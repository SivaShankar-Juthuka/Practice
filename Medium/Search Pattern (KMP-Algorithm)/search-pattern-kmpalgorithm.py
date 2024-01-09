#User function Template for python3

class Solution:
    def search(self, pat, txt):
                # code here
        def callps(lps, pat, n):
            l = 0
            i = 1
            lps[0] = 0  # Initialize lps[0] before the while loop
            while i < n:
                if pat[i] == pat[l]:
                    l += 1
                    lps[i] = l  # Corrected line: lps[i] should be assigned the value of l
                    i += 1
                elif l != 0:
                    l = lps[l - 1]
                else:
                    lps[i] = 0
                    i += 1
            
        lps = [0] * len(pat)
        res = []
        txt_len = len(txt)
        pat_len = len(pat)
        i, j = 0, 0
        callps(lps, pat, pat_len)
        while (txt_len - i) >= (pat_len - j):
            if pat[j] == txt[i]:
                i += 1
                j += 1

            if j == pat_len:
                res.append((i-j)+1)
                j = lps[j-1]
            elif i < txt_len and pat[j] != txt[i]:
                if j != 0:
                    j = lps[j-1]
                else:
                    i += 1
        return res

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        patt = input().strip()
        ob = Solution()
        ans = ob.search(patt, s)
        if len(ans)==0:
            print(-1,end="")
        for value in ans:
            print(value,end = ' ')
        print()
# } Driver Code Ends