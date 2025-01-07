class Solution {
public:
    void util(TreeNode* root,int& sum){
      if(!root)
      return ;
      util(root->right,sum);
      sum+=root->val;
      root->val=sum;
      util(root->left,sum); 
    }
    TreeNode* convertBST(TreeNode* root) {
       if(!root)
       return NULL;
       int sum=0;
       util(root,sum); 
       return root;
    }
};