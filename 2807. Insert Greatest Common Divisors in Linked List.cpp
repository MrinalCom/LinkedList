ListNode* ptr = head;
    while(ptr->next){
        ListNode* temp = new ListNode(__gcd(ptr->val, ptr->next->val),  ptr->next);
        ptr->next = temp;
        ptr = temp->next;
    }
    return head;
