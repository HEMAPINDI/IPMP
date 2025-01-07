    vector<int> preorderTraversal(TreeNode* root) {
        if(!root)
        return {};
        vector<int>v;
        stack<TreeNode*>s;
        TreeNode* cur=root;
        while(cur||!s.empty()){
              while(cur){
                v.push_back(cur->val);
                 if(cur)s.push(cur);
                cur=cur->left;
               

              }
              if(!s.empty()){
                cur=s.top();
                s.pop();
                cur=cur->right;
              }
        }
return v;
    }