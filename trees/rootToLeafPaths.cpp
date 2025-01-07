class Solution {
  public:
    void util(Node* root,vector<vector<int>> &paths,vector<int> path){
        if(!root) return ;
        path.push_back(root->data);
        if(!root->left&&!root->right){
            paths.push_back(path);
            return ;
        }
        util(root->left,paths,path);
        util(root->right,paths,path);
        path.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
       vector<vector<int>> paths;
       vector<int>path;
       util(root,paths,path);
       return paths;
    }
};