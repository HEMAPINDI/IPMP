class Solution {
public:
    void util(TreeNode* root,string &s){
        if(!root) return ;
        s+=to_string(root->val);
        if(root->left||root->right){
            s+='(';
            util(root->left,s);
            s+=')';
        }
        if(root->right){
            s+='(';
            util(root->right,s);
            s+=')';
        }
    }
    string tree2str(TreeNode* root) {
        string s="";
        util(root,s);
        return s;

    }
};