Node* deleteNode(Node* head, int key) 
{
    // Write your code here.
    if(head==NULL){
            return NULL;
    }
    Node* tmp=head;
    Node* prev=NULL;
    Node* tail=head;
    while(tail->next!=head){
        tail=tail->next;
    }
    if(head->data==key){
        if(head->next==head){
                return NULL;
        }
        head=head->next;
        tail->next=head;
        return head;
    }

    while(tmp->data!=key && tmp->next!=head){
            prev=tmp;
            tmp=tmp->next;
    }
    if(tmp->data==key){
        prev->next=tmp->next;
        tmp->next=NULL;

    }
        return head;

}