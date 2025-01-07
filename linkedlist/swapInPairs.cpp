class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
 ListNode* p=head;
 while(p&&p->next){
    int temp=p->val;
    p->val=p->next->val;
    p->next->val=temp;
    p=p->next->next;
 }
 return head;
    }
};