class Solution {
public:
    
    int sum(TreeNode* root,int &maxi)
    {
        if(root==NULL)
        {
            return 0;
        }

        int leftpart=sum(root->left,maxi);
        int rightpart=sum(root->right,maxi);

        maxi=max(max(max(leftpart+root->val,rightpart+root->val),
                 max(leftpart+rightpart+root->val,root->val)),maxi);
        
        return max(max(leftpart,rightpart)+root->val,root->val);

    }
    int maxPathSum(TreeNode* root) {
        if(!root)
           return 0;

        int maxi=INT_MIN;
        sum(root,maxi);
        return maxi;
        
    }
};