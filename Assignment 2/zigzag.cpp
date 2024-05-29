class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int level=1;
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            for(int i=0;i<s;i++){
                TreeNode *node=q.front();
                q.pop();
               
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
             
                v.push_back(node->val);
                
            }
            if(level%2==0)reverse(v.begin(),v.end());
            ans.push_back(v);
            level++;
            
        }
        return ans;

    }
};