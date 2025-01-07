        vector<int> preorderTraversal(TreeNode* root) {
       if(!root) return {} ;
       vector<int>ans;
       TreeNode* cur=root;
       while(cur){
        if(cur->left==nullptr){
            ans.push_back(cur->val);
            cur=cur->right;
        }
        else {
            TreeNode* prev=cur->left;
            while(prev->right && prev->right!=cur) prev=prev->right;
            if(prev->right==nullptr) {
                prev->right=cur;
                ans.push_back(cur->val);
                cur=cur->left;
            }
            else {
                prev->right=nullptr;
                cur=cur->right;
            }
         }
       }
       return ans;
    }