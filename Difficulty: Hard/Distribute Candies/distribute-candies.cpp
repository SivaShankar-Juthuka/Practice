/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
      int solve(Node *root, int &res){
        if(root == NULL) return 0;
        int l = solve(root->left, res);
        int r = solve(root->right, res);
        res += abs(l) + abs(r);
        return root->data + l + r -1;
    }
    int distCandy(Node* root) {
        // code here
        int res = 0;
        solve(root, res);
        return res;
    }
};