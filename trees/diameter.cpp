class Solution {
public:
   int dia(TreeNode* root,int &maxi) 
   { if(!root) return 0;
     int l= dia(root->left,maxi);
     int r= dia(root->right,maxi);
     maxi=max(maxi,l+r);
     return 1+max(l,r);  } 
    int diameterOfBinaryTree(TreeNode* root)
    {
       int maxi=0;
       dia(root,maxi);
       return maxi;
    }
};