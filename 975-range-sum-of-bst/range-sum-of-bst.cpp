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
    int right(TreeNode *root, int low, int high, int &res){
        if(root == NULL) return 0;
        if(root->val <= high and root->val >= low){
            res += root->val;
        }
        right(root->left, low, high, res);
        right(root->right,  low, high, res);
        return res;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res = 0;
        res = right(root, low, high, res);
        return res;
    }
};