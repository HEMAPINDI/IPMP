 ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
        return nullptr;
        ListNode* p,*newH;
       int l=1;
       p=head;
       while(p->next){
        l++;
        p=p->next;
       }
       p->next=head;//circular..
       if(k%=l){
        for(auto i=0;i<l-k;i++){
            p=p->next;
        }
       }
 newH=p->next;
 p->next=nullptr;
        return newH;
    }
