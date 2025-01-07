class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head)
        return NULL;
        ListNode* p,*q,*node1,*node2;
        p=node1=new ListNode(0);
        q=node2=new ListNode(0);
        while(head){
            if(head->val<x){
p=p->next=head;
            }
            else
            q=q->next=head;
        
        head=head->next;
    }
    q->next=NULL;
    p->next=node2->next;
    return node1->next;
    }
};
