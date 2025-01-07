 void create_tree(node* root0, vector<int> &vec){
        queue<node*>q;
        q.push(root0);
        int i=0;
        int n=vec.size();
       while(!q.empty()&&i<n){
           node* cur=q.front();
           q.pop();
            if((2*i+1)<n){
               node* l=newNode(vec[2*i+1]);
               cur->left=l;
               q.push(l);
            }
            if((2*i+2)<n)
            { 
                node* r=newNode(vec[2*i+2]);
                cur->right=r;
                q.push(r);
                
            }i++;
        }
    }