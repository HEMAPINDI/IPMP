class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)
        return false;
        ListNode *p,*q;
        q=p=head;
        do{
        q=q->next;
        p=p->next;
        if(p)
        p=p->next; 
        }while(p&&q&&p!=q);
        if(p&&q&&p==q)
        return true;
        else
        return false;
    }
};