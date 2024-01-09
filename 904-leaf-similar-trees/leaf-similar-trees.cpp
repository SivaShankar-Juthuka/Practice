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
    void leaf(TreeNode* root, vector<int>&v){
        if(root == NULL) return;
        if(root->left==NULL and root->right ==NULL) v.emplace_back(root->val);
        leaf(root->left, v);
        leaf(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        leaf(root1, v);
        vector<int>p;
        leaf(root2, p);
        if(v.size() != p.size()) return false;
        for(int i = 0; i<v.size(); i++){
            if(v[i] != p[i]){
                return false;
            }
        }
        return true;
    }
};