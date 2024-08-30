#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    // Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    unordered_map<int,int> mp;
    Node* pre=head;
    Node* tmp=head;
    Node* after=head->next;
    while(tmp->next!=NULL){
        if(mp.find(tmp->data)==mp.end()){
            mp[tmp->data]++;
            pre=tmp;
            tmp=after;
        }
        else{
            tmp=tmp->next;
            pre->next=tmp;
        }
    
        after=after->next;
    }
    if(mp.find(tmp->data)!=mp.end()){
        pre->next=NULL;
        delete(tmp);
    }
    return head;

}