# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        res = []
        tmp = head
        while tmp:
            if tmp.val == 0:
                res.append(0)
            else:
                if len(res) == 1:
                    res.append(tmp.val)
                else:
                    res[-1] = res[-1] + tmp.val
            tmp = tmp.next
        print(res)  
        result = ListNode(0)
        dummy = result
        for i in res:
            if i != 0:
                x = ListNode(i)
                dummy.next = x
                dummy = x
        return result.next