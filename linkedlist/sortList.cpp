class Solution {
public:
ListNode* merge(ListNode* l1,ListNode* l2){
    ListNode* dummy=new ListNode(0);
     ListNode* cur=dummy;
     while(l1&&l2){
        if(l1->val<l2->val){
            cur->next=l1;
            cur=cur->next;
            l1=l1->next;
        }
        else{
            cur->next=l2;
            cur=cur->next;
            l2=l2->next;
        }
     }
     if(!l1)
     cur->next=l2;
     else
     cur->next=l1;
     return dummy->next;
}
    ListNode* sortList(ListNode* head) {
        if(!head||!head->next)
        return head;
        ListNode* p,*q,*t;
        p=q=head;
        while(p&&p->next){
            t=q;
            q=q->next;
            p=p->next->next;
        }
        p=q;
        t->next=NULL;
        return merge(sortList(head),sortList(p));

    }
};
