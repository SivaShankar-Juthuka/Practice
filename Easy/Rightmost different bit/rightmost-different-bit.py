#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math




    
# } Driver Code Ends
#User function Template for python3

class Solution:
    
    #Function to find the first position with different bits.
    def posOfRightMostDiffBit(self,m,n):
        #Your code here
        s1 = bin(m)[2:]
        s2 = bin(n)[2:]
        if(len(s1) > len(s2)):
            k = len(s1)- len(s2)
            s2 = k*'0'+s2
        if(len(s2) > len(s1)):
            k = len(s2)- len(s1)
            s1 = k*'0'+s1
        for i in range(len(s1)-1, -1, -1):
            if(s1[i] != s2[i]):
                return len(s1) - i
        return -1
        

#{ 
 # Driver Code Starts.
    
def main():
    
    T=int(input())
    
    while(T>0):
        
        
        mn=[int(x) for x in input().strip().split()]
        m=mn[0]
        n=mn[1]
        ob=Solution()
        print(math.floor(ob.posOfRightMostDiffBit(m,n)))
        
        
        
        
        T-=1
    
    




if __name__=="__main__":
    main()
# } Driver Code Ends