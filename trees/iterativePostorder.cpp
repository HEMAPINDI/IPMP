 //postorder --> LRR0...
    vector<int> postOrder(Node* node) {
        if(!node) return {};
        Node* cur=node;
        stack<Node*>st;
        vector<int>v;
        while(!st.empty()||cur){
            while(cur){
            v.push_back(cur->data);
            if(cur) st.push(cur);
            cur=cur->right;
            }
            if(!st.empty()) {
                cur=st.top();
                st.pop();
                cur=cur->left;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }