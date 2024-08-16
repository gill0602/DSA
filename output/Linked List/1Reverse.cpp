ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
}
ListNode* reverseusingrec(Node* &head,node* &prev,Node* &curr){

    if(curr==NULL){
        head=prev;
        return;
    }
    reverseusingrec(head,curr,curr->next);
    curr->next=prev;
}
Node* reverseDLL(Node* head)
{   
    // Write your code here  
        Node* before=NULL;
        Node* temp=head;
        Node* after=NULL;
        
        while(temp!=NULL){
            after=temp->next;
            temp->next=before;
            temp->prev=after;
            before=temp;
            temp=after;
        }
        return before;
    
}

int main{
    Node* curr=head;
    Node* prev=NULL;
    reverseusingrec(head,prev,curr);

}