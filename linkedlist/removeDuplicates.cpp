class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
        return nullptr;
        ListNode* p=head,*q;
        while(p){
           q=p->next;
           if(q&&(p->val==q->val)){
            ListNode* temp=q;
            p->next=q->next;
            q=q->next;
            delete temp;
           }
           else
           p=p->next;
        }
        return head;
    }
};
