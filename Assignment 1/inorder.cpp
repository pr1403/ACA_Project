class Solution {
    vector<int>v;
public:
    vector<int> inorderTraversal(TreeNode* root) {
       if(root!=NULL){
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
       } 
       return v;
    }
};