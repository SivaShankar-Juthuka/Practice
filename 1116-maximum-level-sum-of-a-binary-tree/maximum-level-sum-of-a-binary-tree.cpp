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
    void lot(int level, vector<vector<int>> &lt, TreeNode* root) {
        if(root==NULL) return;
        if(lt.size() == level){
            lt.push_back({root->val});
        }
        else{
            lt[level].push_back(root->val);
        }
        lot(level+1, lt, root->left);
        lot(level+1, lt, root->right);
        return;
    }
    int maxLevelSum(TreeNode* root) {
        vector<vector<int>> lt;
        lot(0, lt, root);
        int mx = -100001, pos = -1;
        for(int i = 0; i < lt.size(); i ++) {
            int x = 0;
            for(int it: lt[i]) {
               x += it;
            //    cout << it << " ";
            }
            // cout << "\n";
            if (mx < x){
                pos = i;
                mx = x;
                // cout << x << " - " << mx << "\n";
            }
        }
        return pos+1;
    }
};