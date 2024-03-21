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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev =NULL, *Next = NULL;
        ListNode *cur = head;
        while(cur != NULL){
            Next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = Next;
        }
        head = prev;
        return head;
    }
};