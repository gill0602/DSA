bool isPalindrome(Node *head) {
        // Your code here
        stack<int> num;
        Node* ptr=head;
        while(ptr){
            num.push(ptr->data);
            ptr=ptr->next;
        }
        Node* tmp=head;
        while(tmp){
            if(tmp->data!=num.top()){
                return false;
            }
            tmp=tmp->next;
            num.pop();
        }
        return true;
    }