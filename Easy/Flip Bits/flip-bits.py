#User function Template for python3

class Solution:
    def maxOnes(self, a, n):
        # Your code goes here
        cnt, mv, one = 0, 0, 0
        for i in range(n):
            if a[i] == 1:
                one += 1
            if a[i] == 0:
                cnt += 1
                if mv < cnt:
                    mv = cnt
            elif cnt != 0:
                cnt -= 1
        if mv < cnt:
            mv = cnt
        return mv + one



#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        ob=Solution()
        print(ob.maxOnes(a, n))

        T -= 1


if __name__ == "__main__":
    main()



# } Driver Code Ends