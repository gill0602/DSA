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