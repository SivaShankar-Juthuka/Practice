/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *t = head, *r = head;
        if(head == NULL or head->next == NULL or head->next->next == NULL) return 0;
        while(true){         
            if(r == NULL or r->next == NULL) return 0;
            r = r->next;
            t = t->next;
            if(r == NULL or r->next == NULL) return 0;
            r = r->next;
            if(t == r) return 1;
        }
        return 1;
    }
};