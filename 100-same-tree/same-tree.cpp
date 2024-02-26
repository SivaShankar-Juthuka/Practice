/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool same(TreeNode* left,TreeNode* right){
        if((left == NULL && right != NULL) || (left != NULL && right == NULL)) return false;
        if (left == NULL && right == NULL)  return true;
        if (left && right && left->val == right->val)
            return same(left->left, right->left) && same(left->right, right->right);
        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL and q == NULL) return true;
        if((p == NULL and q != NULL) or (p != NULL and q == NULL) or (p->val != q->val)) return false;
        return same(p->left, q->left) && same(p->right , q->right);  
    }
};