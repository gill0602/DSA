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