class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root) return ;
        flatten(root->left);
        flatten(root->right);
        TreeNode* temp=root->right;
        root->right=root->left;
        root->left=nullptr;
        while(root->right){
            root=root->right;
        }
        root->right=temp;
    }
    //iterative sol
    void flatten(TreeNode* root) {
        if(!root) return ;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* cur=st.top();
            st.pop();
            if(cur->right) st.push(cur->right);
            if(cur->left) st.push(cur->left);
            if(!st.empty()) cur->right=st.top();
            cur->left=nullptr;
        }
        
    }
};