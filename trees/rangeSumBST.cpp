class Solution {
public:
    int sum;
    void util(TreeNode* root, int low, int high){
        if(!root) return ;
        util(root->left,low,high);
        if(low<=root->val && high>=root->val) sum+=root->val;
        util(root->right,low,high);

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        util(root,low,high);
        return sum;
    }
};