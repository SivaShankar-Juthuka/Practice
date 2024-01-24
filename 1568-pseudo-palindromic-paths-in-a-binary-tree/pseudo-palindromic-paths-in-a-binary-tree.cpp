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
    int solve(TreeNode* root, int x, int &cnt){
        if(root == NULL) return 0;
        x ^= 1<<root->val;
        if(root->left == NULL and root->right == NULL){
            if(x == 0 or ( (x-1)& x) == 0)  cnt += 1;
        }
        solve(root->left, x, cnt);
        solve(root->right, x, cnt);
        return x;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int cnt = 0;
        int res = solve(root, 0, cnt);
        return cnt;
    }
};