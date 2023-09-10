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
    void ins(TreeNode* &root, int val){
        if(root == NULL){
            root = new TreeNode(val);
            return;
        }
        if(root->val > val){
            ins(root->left, val);
        }
        if(root->val < val){
            ins(root->right, val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            root = new TreeNode(val);
        }
        TreeNode *tmp = root;
        ins(tmp, val);
        return root;
    }
};