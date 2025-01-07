ListNode* oddEvenList(ListNode* head) {
    if(!head||!head->next)
        return head;
    ListNode* odd,*even,*evenHead;
    odd=head;
    even=evenHead=head->next;
    while(even&&even->next){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenHead;
    return head;
}