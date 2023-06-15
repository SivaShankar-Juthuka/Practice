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
    void lot(TreeNode* root,vector<vector<int>>&v,int l){
        if(root==NULL)return;
        if(v.size()==l)v.push_back({root->val});
        else v[l].push_back(root->val);
        lot(root->left,v,l+1);
        lot(root->right,v,l+1);
    }
    int maxLevelSum(TreeNode* root) {
        vector<vector<int>>v;
        lot(root,v,0);
        int pos = 0, ma = INT_MIN;
        for(int i = 0; i<v.size(); i++){
            int sum = 0;
            sum = accumulate(v[i].begin(), v[i].end(), sum);
            if(ma < sum){
                ma = sum;
                pos = i;
            }
        }
        return pos+1;
    }
};