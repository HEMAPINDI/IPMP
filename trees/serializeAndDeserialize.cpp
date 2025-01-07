class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root)
        return "";
        string s="";
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            if(cur==nullptr){
                s+="#,";
            }
            else{
                s+=to_string(cur->val)+",";
                q.push(cur->left);
                q.push(cur->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty()) return nullptr;
        stringstream s(data);
        string str;
        getline(s,str,',');
        queue<TreeNode*>q;
        TreeNode* root=new TreeNode(stoi(str));
        q.push(root);
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            getline(s,str,',');
            if(str!="#"){
                 TreeNode* temp=new TreeNode(stoi(str));
                 cur->left=temp;
                 q.push(temp);
            }
             getline(s,str,',');
            if(str!="#"){
                 TreeNode* temp=new TreeNode(stoi(str));
                 cur->right=temp;
                 q.push(temp);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));