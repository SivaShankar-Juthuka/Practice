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
    ListNode* middleNode(ListNode* head) {
        ListNode *tmp=head;
        int cnt=0;
        
        while(tmp!=NULL){
            cnt++;
            tmp=tmp->next;
        }
        int res=(cnt/2);
         
        while(res--){
            head=head->next;
        }
        return head;    
    }
};