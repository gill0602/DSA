#include<iostream>
using namespace std;
//circular linked list
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

void insertNode(Node* &tail,int element ,int d){
    //element -> value after which we want to insert the element
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //when element found
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void deleteNode(Node* &tail,int element){
    if(tail==NULL){
        cout<<"Empty List"<<endl;
    }

    else{
        Node*curr=tail;
        Node*nxt=tail->next;
        while(nxt->data!=element){
            curr=nxt;
            nxt=nxt->next;
        }
        if(curr==nxt){
            tail=NULL;
        }
        //element found
        if(tail==nxt){
            tail=tail->next;
        }
        curr->next=nxt->next;
        nxt->next=NULL;
        delete nxt;

    }
}
void print(Node* tail){
    Node*temp=tail;
    if(tail==NULL){
        cout<<"Empty List"<<endl;
    }
    else{
        do {
            cout<<temp->data<<" ";
            temp=temp->next;
        } while(temp!=tail);
        cout<<endl;
        cout<<"Tail :"<<tail->data<<endl;
    }
    
    
}
int main(){
    //empty list
    Node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    deleteNode(tail,3);
    print(tail);
    //inserting when only one node
    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,5,9);
    print(tail);

    insertNode(tail,5,1);
    print(tail);

    insertNode(tail,5,4);
    print(tail);

    insertNode(tail,5,2);
    print(tail);

    deleteNode(tail,3);
    print(tail);

    deleteNode(tail,4);
    print(tail);
}