
// First Approach O(n) space and O(n) time 

Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        unordered_map<Node*,Node*> old_to_new;
        Node* tmp=head;
        while(tmp){
            old_to_new[tmp]=new Node(tmp->val);
            tmp=tmp->next;
        }
        tmp=head;
        while(tmp){
            old_to_new[tmp]->next=old_to_new[tmp->next];
            old_to_new[tmp]->random=old_to_new[tmp->random];
            tmp=tmp->next;
        }
        return old_to_new[head];
    }

// Second Approach Interweaving O(1) space and O(n) time

if(!head){
            return NULL;
        }
        Node* tmp=head;
        while(tmp){
            Node* newNode=new Node(tmp->val);
            newNode->next=tmp->next;
            tmp->next=newNode;
            tmp=tmp->next->next;
        }
        tmp=head;
        while(tmp){
            if(tmp->random){
                tmp->next->random=tmp->random->next;
            }
            tmp=tmp->next->next;
        }
        Node* old_head=head;
        Node* new_head=head->next;
        Node* curr_old=old_head;
        Node* curr_new=new_head;

        while(curr_old){
            curr_old->next=curr_old->next->next;
            curr_new->next=curr_new->next?curr_new->next->next:NULL;
            curr_old=curr_old->next;
            curr_new=curr_new->next;
        }
        return new_head;
        