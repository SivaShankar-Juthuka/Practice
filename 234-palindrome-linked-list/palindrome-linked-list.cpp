/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode *prev  = NULL, *next = NULL;
        ListNode *cur =head, *m;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *t = head,*r = head,*m, *k;
        if(head->next ==NULL) return 1;
        while(true){
            if(r==NULL) break;
            r = r->next;            
            t = t->next;
            if(r==NULL) break;
            r = r->next;
        }
        t = reverse(t);
        m = head, k = t;
        while(k != NULL){
            if(m->val != k->val) return false;
            m = m->next;
            k = k->next;
        }
        return true;
    }
};