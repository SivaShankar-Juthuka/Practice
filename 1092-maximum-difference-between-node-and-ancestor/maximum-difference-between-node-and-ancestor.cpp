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
    
    int solve(TreeNode* root, int maxVal, int minVal){
        if(!root) return 0;
        int val = root -> val;
        int nodeRes = max(abs(val - maxVal), abs(val - minVal));
        int leftRes = solve(root->left, max(val, maxVal), min(val, minVal));
        int rightRes = solve(root->right, max(val, maxVal), min(val, minVal));
        return max({nodeRes, leftRes, rightRes}); 
    }
    int maxAncestorDiff(TreeNode* root) {
        return solve(root, root->val, root->val);
    }
};