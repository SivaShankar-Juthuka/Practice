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
    ListNode* reverse(ListNode *head){
        ListNode *prev =NULL, *Next = NULL, *cur = head;
        while(cur != NULL){
            Next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = Next;
        }
        head = prev;
        return head;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int cnt = 1;
        ListNode *end = NULL, *tmp = head;
        ListNode *rev = new ListNode(-1);
        ListNode *tail = rev;
        while(tmp){
            if(cnt >= left and cnt <= right){
                tail->next = new ListNode(tmp->val);
                tail = tail->next;
            } 
            cnt+= 1;
            tmp = tmp->next;
        }
        rev = reverse(rev->next);
        tmp = head;
        cnt = 1;
        ListNode *res = new ListNode(-1);
        tail = res;
        while(tmp){
            if(cnt >= left and cnt <= right){
                tail->next = new ListNode(rev->val);
                rev = rev->next;
                tail = tail->next;
            }
            else{
                tail->next = new ListNode(tmp->val);
                tail = tail->next;
            }
            cnt += 1;
            tmp = tmp->next;
        }
        return res->next;
    }
};