class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* p,*q;
        p=q=head;
     
        while(p&&p->next){
            q=q->next;
            p=p->next->next;
        }
        return q;
    }
};