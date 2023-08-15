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
    ListNode* partition(ListNode* head, int x) {
        ListNode* before = new ListNode(-1);
        ListNode* after = new ListNode(-1);
        ListNode* tmp = before;
        ListNode* tmp1 = after;
        while(head!=NULL){
            if(head->val < x){
                tmp->next = head;
                tmp = head;
            }
            else {
                tmp1->next = head;
                tmp1 = head;
            }
            head = head->next;
        }
        tmp1->next = NULL;
        tmp->next = after->next;
        return before->next;
    }
};