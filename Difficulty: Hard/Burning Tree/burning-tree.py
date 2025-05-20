class Solution:
    def depth(self, root):
        if root is None:
            return 0
        left = self.depth(root.left)
        right = self.depth(root.right)
        return max(left, right)+1

    def solve(self, root, tar, res):
        if root is None:
            return -1
        if root.data == tar:
            depth = self.depth(root)-1
            res[0] = max(res[0], depth)
            return 1
        
        left = self.solve(root.left, tar, res)
        if left != -1:
            depth = self.depth(root.right)
            res[0] = max(res[0], left+depth)
            return left+1
        
        right = self.solve(root.right, tar, res)
        if right != -1:
            depth = self.depth(root.left)
            res[0] = max(res[0], right+depth)
            return right+1
        
        return -1
        
    def minTime(self, root, target):
        # code here
        res = [0]
        self.solve(root, target, res)
        
        return res[0]



#{ 
 # Driver Code Starts
#Initial Template for Python 3

from collections import deque


# Tree Node
class Node:

    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None


# Function to Build Tree
def buildTree(s):
    #Corner Case
    if (len(s) == 0 or s[0] == "N"):
        return None

    # Creating list of strings from input
    # string after spliting by space
    ip = list(map(str, s.split()))

    # Create the root of the tree
    root = Node(int(ip[0]))
    size = 0
    q = deque()

    # Push the root to the queue
    q.append(root)
    size = size + 1

    # Starting from the second element
    i = 1
    while (size > 0 and i < len(ip)):
        # Get and remove the front of the queue
        currNode = q[0]
        q.popleft()
        size = size - 1

        # Get the current node's value from the string
        currVal = ip[i]

        # If the left child is not null
        if (currVal != "N"):

            # Create the left child for the current node
            currNode.left = Node(int(currVal))

            # Push it to the queue
            q.append(currNode.left)
            size = size + 1
        # For the right child
        i = i + 1
        if (i >= len(ip)):
            break
        currVal = ip[i]

        # If the right child is not null
        if (currVal != "N"):

            # Create the right child for the current node
            currNode.right = Node(int(currVal))

            # Push it to the queue
            q.append(currNode.right)
            size = size + 1
        i = i + 1
    return root


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        line = input()
        target = int(input())
        root = buildTree(line)
        print(Solution().minTime(root, target))

        print("~")

# } Driver Code Ends