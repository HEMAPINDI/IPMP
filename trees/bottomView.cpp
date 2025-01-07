  vector <int> bottomView(Node *root) {
        if(!root) return {};
        queue<pair<Node*,int>>q;
        q.push({root,0});
        map<int,Node*>m;
        m[0]=root;
        while(!q.empty()){
        pair<Node*, int> front = q.front();
        q.pop();
        Node* cur = front.first; 
        int sec = front.second;   
        m[sec]=cur;
        if(cur->left){
                q.push({cur->left,sec-1});
        }
        if(cur->right){
                q.push({cur->right,sec+1});
        }
    }
        vector<int>ans;
        for(auto i:m){
            ans.push_back(i.second->data);
        }
        return ans;
    }