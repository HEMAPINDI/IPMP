// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int n) {
        Node* p,*q;
        p=q=head;
        int i=0;
        while(i<n&&q){
            q=q->next;i++;
        }
        if(i!=n) return -1;
        while(q){
            p=p->next;q=q->next;
        }
        
        return p->data;
    }
};
