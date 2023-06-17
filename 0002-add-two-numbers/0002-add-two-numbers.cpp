class Solution {
public:
    ListNode* reverse(ListNode *head){
        ListNode *prev = NULL, *next = NULL;
        ListNode *cur = head;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = NULL;
        int sum = 0, carry = 0, flag = 0;
        while(l1 != NULL and l2 != NULL){
            sum += l1->val;
            l1 = l1->next;
            sum += l2->val;
            l2 = l2->next;
            sum += carry;
            carry = sum / 10;
            ListNode *Nn = new ListNode(sum%10);
            Nn->next = res;
            res = Nn;
            sum = 0;
        }
        while(l1 != NULL){
            sum += l1->val;
            sum += carry;
            carry = sum / 10;
            ListNode *Nn = new ListNode(sum%10);
            Nn->next = res;
            res = Nn;
            sum = 0;
            l1 = l1->next;
        }
        while(l2 != NULL){
            sum += l2->val;
            sum += carry;
            carry = sum / 10;
            ListNode *Nn = new ListNode(sum%10);
            Nn->next = res;
            res = Nn;
            sum = 0;
            l2 = l2->next;
        }
        if(carry){
            ListNode *Nn = new ListNode(carry);
            Nn->next = res;
            res = Nn;
        }
        return reverse(res);
    }
};