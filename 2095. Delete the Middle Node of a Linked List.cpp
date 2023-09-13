/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
           if(head->next==nullptr){
                 return nullptr;
            }
      int len=0;
      ListNode*temp=head;
      ListNode*start=head;
      ListNode*we=start;
      int go=0;
      while(temp!=nullptr)
      {
          temp=temp->next;
          len++;
      }
      int move=1;
      
          while(move!=len/2){
              start=start->next;
              move++;
          }
          start->next=start->next->next;
          return we;
      }
    
};
