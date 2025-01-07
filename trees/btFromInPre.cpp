int search(vector<int> inorder,int x,int start,int end){
    for(int i=start;i<=end;i++)
    {
        if(x==inorder[i])
        return i;
    }
    return -1;
}
    TreeNode* util(vector<int> preorder,vector<int>inorder,int &preindex,int start,int end ){
        if(start>end)
        return nullptr;
        TreeNode* root=new TreeNode(preorder[preindex]);
        int inindex=search(inorder,preorder[preindex++],start,end);
       root->left= util(preorder,inorder,preindex,start,inindex-1);
        root->right=util(preorder,inorder,preindex,inindex+1,end);
   
   return root; }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preindex=0;
       return util(preorder,inorder,preindex,0,preorder.size()-1);
    }
    