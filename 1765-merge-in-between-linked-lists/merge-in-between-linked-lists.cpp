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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int x = 0;
        ListNode *prev = list1, *nxt = list1;
        while(true){
            if(x < a)   prev = nxt;
            nxt = nxt->next;
            x += 1;
            if(x == (b+1)) break;
        }
        prev->next = list2;
        ListNode* tmp = list2;
        while(tmp->next){
            tmp = tmp->next;
        }
        tmp->next = nxt;
        return list1;
    }
};