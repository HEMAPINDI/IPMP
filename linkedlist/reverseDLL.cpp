class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        
        if(head==nullptr || head->next==nullptr) return head;
        DLLNode* previous,*current;
        previous=nullptr;
        current=head;
        
        while(current){
            previous=current->prev;
            current->prev=current->next;
            current->next=previous;
            
            current=current->prev;
        }
        return previous->prev;
    }
};