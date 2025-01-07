    Node* copyRandomList(Node* head) {
        //USING HASHMAP....
        map<Node*,Node*>m;
        Node* p=head;
        while(p){
            m[p]=new Node(p->val);
            p=p->next;
        }
        p=head;
        while(p){
            Node* copynode=m[p];
            copynode->next=m[p->next];
            copynode->random=m[p->random];
            p=p->next;
        }
        return m[head];
    }