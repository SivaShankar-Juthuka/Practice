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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode *tmp = head;
        ListNode *prev = NULL;
        while(tmp){
            cnt += 1;
            tmp = tmp->next;
        }
        if(cnt == n) return head->next;
        cnt -= n;
        if(cnt == 0) return NULL;
        tmp = head;
        prev = tmp;
        while(cnt){
            cnt -= 1;
            prev = tmp;
            tmp = tmp->next;
        }
        prev->next = tmp->next;
        return head;
    }
};