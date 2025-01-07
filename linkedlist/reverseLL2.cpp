   ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(!head||left==right)
    return head;
    ListNode* dummy=new ListNode(0,head);
    ListNode* prev_left=dummy;
    for(int i=1;i<left;i++){
        prev_left=prev_left->next;
    }
    ListNode* curr=prev_left->next;
    ListNode* q,*r;
q=r=nullptr;
       for(auto i=left;i<=right;i++){
        q=curr->next;
        curr->next=r;
        r=curr;
        curr=q;
       }
        prev_left->next->next=curr;
       prev_left->next=r;
      
     return dummy->next;
    }