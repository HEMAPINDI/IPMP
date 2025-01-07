class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
        return 0;
        int x=maxDepth(root->left);
        int y=maxDepth(root->right);
        return x>y?x+1:y+1;
    }
};