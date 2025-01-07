class Solution {
public:
void lca(TreeNode* root,TreeNode* p,TreeNode* q,TreeNode **ans){
    if(!root)
    return ;
      if(p->val<root->val&&q->val<root->val)
       lca(root->left,p,q,ans);
      else if(p->val>root->val&&q->val>root->val) 
       lca(root->right,p,q,ans);
       else
       *ans=root;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     TreeNode* ans=nullptr;
     lca(root,p,q,&ans);
     return ans;
    }
};
