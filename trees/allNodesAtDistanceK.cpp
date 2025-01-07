/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void findParent( unordered_map<TreeNode*,TreeNode*>& m,TreeNode* root){
         queue<TreeNode*>q;
         q.push(root);
         while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            if(cur->left){
                m[cur->left]=cur;
                q.push(cur->left);
            }
            if(cur->right){
                m[cur->right]=cur;
                q.push(cur->right);
            }
         }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>m;
        findParent(m,root);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int curLevel=0;
        while(!q.empty()){
            if(curLevel==k)break;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* cur=q.front();
                q.pop();
              if(cur) { if(cur->left&&!visited[cur->left]){
                    visited[cur->left]=true;
                    q.push(cur->left);
                } 
                if(cur->right&&!visited[cur->right]){
                     visited[cur->right]=true;
                    q.push(cur->right);
                }
                if(!visited[m[cur]]&&!visited[m[cur]]){
                       visited[m[cur]]=true;
                       q.push(m[cur]);
                }}
            }
            curLevel++;
        }
        vector<int>v;
        while(!q.empty()){
            TreeNode* cur=q.front(); q.pop();
           if(cur) v.push_back(cur->val);
           
        }
        return v;
    }
};