class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=new ListNode();
        ListNode* answer=ans;
        while(list1 && list2){
            if(list1->val < list2->val){
                ListNode*make=new ListNode(list1->val);
                ans->next=make;
                ans=ans->next;
                list1=list1->next;
            }
            else{
                ListNode*mak=new ListNode(list2->val);
                ans->next=mak;
                ans=ans->next;
                list2=list2->next;

            }
        }
            
        
    if(list1)ans->next=list1;
    if(list2)ans->next=list2;
    return answer->next;
        
    }
        
};
