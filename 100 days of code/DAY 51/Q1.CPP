//  Even Odd Tree

class Solution {
public:
    

bool isEvenOddTree(TreeNode* root) {
    if(root == nullptr) {
        return true;
    }
    
    std::queue<TreeNode*> q;
    q.push(root);
    int level = 0;
    
    while(!q.empty()) {
        int size = q.size();
        int prev = level % 2 == 0 ? INT_MIN : INT_MAX;
        
        for(int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            
            if(level % 2 == 0) { // even level
                if(node->val % 2 == 0 || node->val <= prev) {
                    return false;
                }
            } else { // odd level
                if(node->val % 2 != 0 || node->val >= prev) {
                    return false;
                }
            }
            
            prev = node->val;
            
            if(node->left) {
                q.push(node->left);
            }
            if(node->right) {
                q.push(node->right);
            }
        }
        
        level++;
    }
    
    return true;
}
};
