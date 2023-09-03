class Solution {

  ListNode* reverse(ListNode* &prev,ListNode* &curr){
    //base case
    if(curr==nullptr){
        return prev;
    }
    ListNode* forward=curr->next;
    curr->next=prev;
    return reverse(curr,forward);
}

public:

    ListNode* reverseList(ListNode* head) {
        ListNode*prev=nullptr;
        ListNode*curr=head;
        return reverse(prev,curr);
    }
};
