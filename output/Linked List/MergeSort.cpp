class Solution {
    public:
    Node* findMid(Node* head){
        if(head==NULL){
            return head;
        }
        Node* slow=head;
        Node* fast=head;
        while(fast->next){
            fast=fast->next;
            if(fast->next){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
    public:
    
    Node* merge(Node*left,Node*right){
        if(!left){
            return right;
        }
        if(!right){
            return left;
        }
        Node*tmp=new Node(0);
        Node*res=tmp;
        while(left && right){
            if(left->data<=right->data){
                tmp->next=left;
                tmp=tmp->next;
                left=left->next;
            }
            else{
                tmp->next=right;
                tmp=tmp->next;
                right=right->next;
            }
        }
        while(left){
            tmp->next=left;
            tmp=left;
            left=left->next;
        }
        while(right){
            tmp->next=right;
            tmp=right;
            right=right->next;
        }
        return res->next;
        
    }
    public:
    
    // Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL)
            return head;
        
        Node* mid=findMid(head);
        
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        
        // recursive calls to split the list further
        left=mergeSort(left);
        right=mergeSort(right);
        
        Node* result =merge(left,right);
        
        return result;
    }
};