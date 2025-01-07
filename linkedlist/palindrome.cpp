class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        stack<int>st;
        int len=0;
        Node* p=head;
        while(head){
            len++;
            st.push(head->data);
            head=head->next;
        }
        int j=len/2;
        while(j--){
            if(st.top()!=p->data) return false;
            st.pop();
            p=p->next;
        }
        return true;
        
    }
};