class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p&&!q)
        return true;
        if(p&&q)
       return ((p->val==q->val)&&isSameTree(p->left,q->right)&&isSameTree(p->right,q->left));
       return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root||(root&&!root->left&&!root->right))
        return true;
        return isSameTree(root->left,root->right);
       
    }
};