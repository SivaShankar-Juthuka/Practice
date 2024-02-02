#User function template for Python

class Solution:
    # your task is to complete this function
    # function should return an integer
    def atoi(self,string):
        # Code here
        if string[0]=="-" and string[1:].isnumeric():
                return int(string)
        if string.isnumeric():
            return int(string)
        else:
            return -1





#{ 
 # Driver Code Starts
#Initial template for Python

if __name__=='__main__':
    t=int(input())
    for i in range(t):
        string = input().strip();
        ob=Solution()
        print(ob.atoi(string))
# } Driver Code Ends