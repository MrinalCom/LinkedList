class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode*odd=head;
        ListNode*even=head->next;
        ListNode*val=even;
        
        while(even && even->next){
            ListNode*temp=even->next;
            even->next=temp->next;
            odd->next = temp;
            odd = temp;
            even = odd->next;
        }
        odd->next = val;
        return head;


    }
};
