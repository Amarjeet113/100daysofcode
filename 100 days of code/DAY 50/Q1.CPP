//  Diameter of Binary Tree  (LEETCODE)

class Solution {
public:
    int mx = 0;
    int solve(TreeNode* root){
        if(root == NULL) return 0;
        int l = solve(root->left), r = solve(root->right);
        mx = max(mx, l + r);
        return 1 + max(l, r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return mx;
    }
};
