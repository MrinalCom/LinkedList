class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        unordered_set<ListNode*> st;
        while(head1 != NULL) {
             st.insert(head1);
            head1 = head1->next;
        }
        while(head2 != NULL) {
            if(st.find(head2) != st.end()) 
                return head2;
            head2 = head2->next;
        }
        return NULL;
    }
};
