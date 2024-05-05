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
    void deleteNode(ListNode* node) {
        if (node == NULL or node->next == NULL)  return;
        ListNode *res = node->next;
        node->val = res->val;
        node->next = res->next;
        delete res;
    }
};