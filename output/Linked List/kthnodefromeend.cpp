#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/

node *findKthFromLast(node *head, int k)
{
	//Write your Code Here
	node* tmp=head;
	int n=0;
	while(tmp!=NULL){
		tmp=tmp->next;
		n++;
	}
	tmp=head;
	int cnt=0;
	while(cnt<n-k){
		tmp=tmp->next;
		cnt++;
	}
	return tmp;
}