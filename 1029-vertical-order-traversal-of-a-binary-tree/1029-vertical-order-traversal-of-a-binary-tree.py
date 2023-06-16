# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def check(self, root,val,level):
            if not root:
                return
            self.d1[val].append((root.val,level))
            if root.left:
                self.check(root.left,val-1,level+1)
            if root.right:
                self.check(root.right,val+1,level+1)
    def verticalTraversal(self, root: Optional[TreeNode]) -> List[List[int]]:
        self.d1=defaultdict(list)
        self.check(root,0,0)
        l=[]
        #print(self.d1)
        for x in sorted(self.d1.keys()):
            l1=self.d1[x]
            l1.sort(key=lambda x:(x[1],x[0]))
            l2=[]
            for x in l1:
                l2.append(x[0])
            l.append(l2)
        return l