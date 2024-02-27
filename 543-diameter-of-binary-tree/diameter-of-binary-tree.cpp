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
    int dm;
    int solve(TreeNode* root, int &dm){
        if(root == NULL) return 0;
        int left = solve(root->left, dm);
        int right = solve(root->right, dm);
        dm = max(dm, left + right);
        return max(left, right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dm = 0;
        solve(root, dm);
        return dm;
    }
};