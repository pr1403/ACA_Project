class Solution {
public:
    vector<int>v;
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(root!=NULL){
        postorderTraversal(root->left);
        v.push_back(root->val);
        postorderTraversal(root->right);
        }
        return v;
    }
    
};