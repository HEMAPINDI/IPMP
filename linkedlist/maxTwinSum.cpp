    int pairSum(ListNode* head) {
        if(!head||!head->next)
        return 0;
        //if(head&&head->next&&head->next->next)
        //return head->val+head->next->val;
        ListNode* cur=head;
        stack<int>s;
        while(cur){
            s.push(cur->val);
            cur=cur->next;
        }
        cur=head;
        int maxi=INT_MIN;
        while(cur){
            maxi=max(maxi,cur->val+s.top());
            s.pop();
            cur=cur->next;
        }
        return maxi;
    }