#include <bits/stdc++.h> 
/****************************************************

    Following is the class structure of the Node class:

    class Node {
    public:
	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
}

*****************************************************/

Node* sortLL(Node* head) 
{
    // Write your code here.
	Node* temp=head;
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    while(temp!=NULL){
        if(temp->data==0){
            cnt0++;
        }
        else if(temp->data==1){
            cnt1++;
        } else {
            cnt2++;
        }
        temp=temp->next;
    }
    Node* tmp=head;
    while(cnt0!=0){
        tmp->data=0;
        cnt0--;
        tmp=tmp->next;
            }
    while(cnt1!=0){
        tmp->data=1;
        cnt1--;
       tmp=tmp->next;
    }
    while(cnt2!=0){
        tmp->data=2;
        cnt2--;
        tmp=tmp->next;
    }
    return head;


}

Node * ptr0, * ptr1 ,* ptr2,*p0,*p1,*p2;
    ptr0 = new Node(0);
    ptr1 = new Node(0);
    ptr2 = new Node(0);
    p0=ptr0;
    p1=ptr1;
    p2=ptr2;

    Node * tmp=head;
    while(tmp){
        if(tmp->data==0){
            ptr0->next=tmp;
            ptr0=ptr0->next;
        }
        else if(tmp->data==1){
            ptr1->next=tmp;
            ptr1=ptr1->next;
        }
        else{
            ptr2->next=tmp;
            ptr2=ptr2->next;
        }
        tmp=tmp->next;
    } 
    ptr0->next=p1->next;
    ptr1->next=p2->next;
    ptr2->next=NULL;
    return p0->next;
