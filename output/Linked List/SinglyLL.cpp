#include<iostream>
using namespace std;
//singly linked list
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node() {
        int value=this->data;
        //MEMORY FREE
        if(this->next==NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data :"<<value<<endl;

    }
};
void insertAtHead(Node* &head,int d){
    //new node create;
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node*temp=new Node(d);  
    tail->next=temp;
    tail=tail->next;//tail=temp;
}
void insertAtPosition(Node* &tail,Node* &head,int position ,int d){
    Node*temp=head;
    if(position==1){
        insertAtHead(head,d);
        return ;
    }
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a new node 
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    

}
void deleteAtFirst(Node* &head,Node* &tail){
    if(head->next==NULL){
        tail=tail->next;
    }
    Node*temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
void deleteAtLast(Node* &head,Node* &tail){
    if(head==NULL){
        return;
    }

    if(head->next==NULL){
        Node*temp=head;
        head=head->next;
        tail=tail->next;
        delete temp;
        return;    
    }
    Node* curr=head;
    Node* prev=NULL;
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    tail=prev;
    prev->next=NULL;
    curr->next=NULL;//deleted node doesnt point to any node now
    delete curr;
}

void deleteNode(Node* &head,Node* &tail,int position){
    if(position==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node 
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            prev->next=NULL;
            tail=prev;
        }
        else{
            prev->next=curr->next;
        }

        curr->next=NULL;//deleted node doesnt point to any node now
        delete curr;


    }
}
void print(Node* head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    //creation of a new node
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    

    //head pointed to node1;
    Node*head=node1;
    Node*tail=node1;

    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,15);
    print(head);

    //insert at tail
    insertAtTail(tail,25);
    print(head);

    //insert at pos
    insertAtPosition(tail,head,3,20);
    print(head);
    insertAtPosition(tail,head,1,8);
    print(head);
    insertAtPosition(tail,head,7,35);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    //deleting a node
    deleteNode(head,tail,1);
    print(head);
    deleteNode(head,tail,5);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    deleteNode(head,tail,5);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    deleteAtFirst(head,tail);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    print(head);

    deleteAtLast(head,tail);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    print(head);

    Node* node2=new Node(100);
    Node*head1=node2;
    Node*tail1=node2;
    print(head1);
    deleteAtFirst(head1,tail1);
    print(head1);
    cout<<"Head : "<<head1<<endl;
    cout<<"Tail : "<<tail1<<endl;



    return 0;
}