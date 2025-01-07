    void deleteAlt(struct Node *head) {
        while(head->next)
        {
            if(head->next->next)head->next=head->next->next;
            else head->next=nullptr;
            if(head->next)head=head->next;
            
        }
    }