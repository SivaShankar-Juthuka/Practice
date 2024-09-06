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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int, vector<int>> mp;
        for(int i = 0; i< nums.size(); i++) {
            mp[nums[i]] = {};
        }
        ListNode* tmp = head;
        int i = 0;
        while (tmp) {
            if (mp.find(tmp->val) != mp.end()) {
                mp[tmp->val].push_back(i);
            }
            tmp = tmp->next;
            i += 1;
        }
        ListNode *root = new ListNode(-1), *bmp = root, *cmp = head;
        while(cmp) {
            if (mp.find(cmp->val) == mp.end()) {
                ListNode *t = new ListNode(cmp->val);
                bmp->next = t;  
                bmp = t;
            }
            cmp = cmp->next;
        }
        return root->next;
    }
};