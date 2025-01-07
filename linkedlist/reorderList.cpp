class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head||!head->next)
        return ;
        stack<ListNode*>s;
        ListNode* p=head,*q;
        int size=0;
        while(p){
            s.push(p);
            p=p->next;
            size++;
        }
        p=head;
        for(int i=0;i<size/2;i++){
            ListNode* e=s.top();
            s.pop();
            e->next=p->next;
            p->next=e;
           p= p->next->next;
        }
        p->next=nullptr;
    }
};
