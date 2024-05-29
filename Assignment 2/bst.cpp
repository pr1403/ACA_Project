class Solution {
public:
    TreeNode* a;
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root!=NULL){
            if((root->val)==val){
              a=root;
           }
           else{
            searchBST(root->left,val) || searchBST(root->right,val);
           }
        }
        if(a!=NULL)return a;
        else return NULL;
        
        
        
    }
};