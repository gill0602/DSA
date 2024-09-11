/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node* merge(Node* a,Node* b){
	if(!a) return b;
	if(!b) return a;

	Node * result;
	
	if(a->data<b->data){
		result=a;
		result->child=merge(a->child,b);
	}
	else{
		result=b;
		result->child=merge(a,b->child);
	}
	result->next=NULL;
	return result;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(!head || !head->next) return head;

	//recusrive function for the nodes to the right
	Node* rootnext=flattenLinkedList(head->next);
	head->next=NULL;
	//merge
	head=merge(head,rootnext);

	return head;

}
