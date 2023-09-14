class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr|| head->next==nullptr){
            return head;
        }
        ListNode*temp=head;
        vector<int>ans;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode*first=new ListNode(ans[0]);
        ListNode*me=first;
        int i=1;
        while(i<ans.size())
        {
            ListNode*second=new ListNode(ans[i]);
            first->next=second;
            first=second;
            i++;
        }
        return me;
        }
};
