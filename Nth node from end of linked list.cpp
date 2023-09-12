class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           
           int len=0;
        Node*temp=head;
        Node*h=head;
        while(temp!=nullptr){
            temp=temp->next;
            len++;
        }
    // if(K==1 && len==1){
    //     return nullptr;
    // }
    
        
        int required=len-n;
        if(required<0){
            return -1;
        }
        if(required==0){
            return h->data;
        }
        
        
    Node*move=head;
    Node*req=move;
    int i=0;
    while(i!=required-1){
        move=move->next;
        i++;
    }
    return move->next->data;
    }
};
