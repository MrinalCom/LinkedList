int len=0;
    Node*temp=head;
    while(temp!=nullptr){
        temp=temp->next;
        len++;
    }
    // if(K==1 && len==1){
    //     return nullptr;
    // }
    
    
    int required=len-K;
    if(required==0){
        head=head->next;
        return head;
    }
    Node*move=head;
    Node*req=move;
    int i=0;
    while(i!=required-1){
        move=move->next;
        i++;
    }
    move->next=move->next->next;
    return req;
