    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      int c=0;
      ListNode* dummy=new ListNode(0),*t;
      t=dummy;
      while(l1||l2||c){
        c+=(l1?l1->val:0)+(l2?l2->val:0);
           t->next=new ListNode(c%10);
           c=c/10;
           t=t->next;
           if(l1)
           l1=l1->next;
           if(l2)
           l2=l2->next;
      }
      return dummy->next;  
    }