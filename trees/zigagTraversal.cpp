class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        bool r=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int x=q.size();
            vector<int>v;
            for(int i=0;i<x;i++){
            TreeNode* cur=q.front();
            v.push_back(cur->val);
            q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
            if(r) ans.push_back(v);
            else {reverse(v.begin(),v.end());
                ans.push_back(v);}
            r=!r;
        }
        return ans;        
    }
};