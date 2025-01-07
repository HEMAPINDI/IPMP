    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode* p,*q;
      int n=0,m=0;
      p=headA;
      q=headB;
      while(p){
        n++;
        p=p->next;
      }
      while(q){
        m++;
        q=q->next;
      }
int t=abs(n-m);
if(n>m){
    while(t){
        headA=headA->next;
        t--;
    }
}
else{
     while(t){
        headB=headB->next;
        t--;
    }
}
while(headA&&headB){
    if(headA==headB)
    return headA;
    else{
         headA=headA->next;
          headB=headB->next;
    }
}
return NULL;
    }
};
