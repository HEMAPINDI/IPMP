class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
        return nullptr;
        ListNode* prev,*q;

        ListNode* dummy=new ListNode(0,head);
        prev=dummy;
        while(head){
            if(head->next&&head->val==head->next->val){
                while(head->next!=NULL&&head->val==head->next->val)
                head=head->next;
             prev->next=head->next;
            }
            else
            prev=prev->next;
            head=head->next;
        }

        return dummy->next;
        
    }
};