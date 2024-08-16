#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    //destructor
    ~ Node() {
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory freed for node with data :"<<value<<endl;
    }

};
void insertAtHead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node*temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node*temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    
}
void insertAtTail(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node*temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        insertAtHead(head,tail,d);
        return ;
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    //creating a new node 
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;  
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}
void deleteNode(Node* &head,Node* &tail,int position){
    if(position==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node 
        Node* curr=head;
        Node* prv=NULL;
        int cnt=1;
        while(cnt<position){
            prv=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            tail=prv;
            curr->prev=NULL;
            prv->next=NULL;
        }
        else{
            prv->next=curr->next;
            curr->next->prev=prv;
        
            curr->prev=NULL;
        }

        curr->next=NULL;//deleted node doesnt point to any node now
        delete curr;


    }
}
void print(Node* head,Node* tail){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Head :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;
}
int getLength(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head,tail);
    // cout<<getLength(head)<<endl;
    insertAtHead(head,tail,20);
    print(head,tail);
    insertAtHead(head,tail,30);
    print(head,tail);
    insertAtHead(head,tail,40);
    print(head,tail);
    insertAtTail(head,tail,50);
    print(head,tail);
    insertAtPosition(head,tail,1,100);
    print(head,tail);
    insertAtPosition(head,tail,7,170);
    print(head,tail);
    insertAtPosition(head,tail,4,150);
    print(head,tail);

    //deletion
    deleteNode(head,tail,1);
    print(head,tail);

    deleteNode(head,tail,7);
    print(head,tail);

    deleteNode(head,tail,4);
    print(head,tail);
}