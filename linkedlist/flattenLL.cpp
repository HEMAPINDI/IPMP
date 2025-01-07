class Solution {
public:
    Node* flatten(Node* head) {
        Node* cur=head;
        while(cur){
            if(cur->child){
                Node* temp=cur->next;
                cur->next=cur->child;
                cur->next->prev=cur;
                cur->child=NULL;
                Node* p=cur->next;
                while(p->next)
                p=p->next;
                p->next=temp;
                if(temp)
                temp->prev=p;
            }
            else
            cur=cur->next;
        }
        return head;
    }
};