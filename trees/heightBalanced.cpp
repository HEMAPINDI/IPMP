class Solution {
public:
    int util(TreeNode* root){
        if(!root)
        return 0;
        int l=util(root->left);
        if(l==-1) return -1;
        int r=util(root->right);
        if(r==-1) return -1;
        if(abs(l-r)>1)  return -1;
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        return util(root)!=-1;
    }
};