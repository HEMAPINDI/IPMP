class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {      
       vector<int>ans;
       if(!root)
       return {};
       queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++) {
        TreeNode* temp=q.front();
        q.pop();
        if(i==s-1)
        ans.push_back(temp->val);
        if(temp->left)
        q.push(temp->left); 
        if(temp->right)
        q.push(temp->right);  
        }
        }
        return ans;
    
    }
};