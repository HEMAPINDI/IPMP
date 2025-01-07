  vector<int> inorderTraversal(TreeNode* root) {
        if(!root)
        return {};
        vector<int>res;
        TreeNode* cur=root;
        stack<TreeNode* >s;
         while(!s.empty()||cur){
             while(cur){
                if(cur)s.push(cur);
               cur=cur->left;
               
             }
               if(!s.empty()) {
                cur=s.top();
                res.push_back(cur->val);
                s.pop();
                cur=cur->right;}
             }
            
         
         return res;
    }