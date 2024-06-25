class Solution {
public:
    bool leaf(TreeNode* root) {
        return (root != NULL && root->left == NULL && root->right == NULL);
    }
    
    int sumOfLeftLeaves(TreeNode* root, bool left = false) {
        if (root == NULL) return 0;
        int sum=0;
        if (leaf(root) && left) {
            sum+=root->val;
        }
        
        sum+= sumOfLeftLeaves(root->left, true);
        sum+= sumOfLeftLeaves(root->right, false);
        
        return sum;
    }
};