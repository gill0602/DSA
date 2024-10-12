void Queue::push(int x) {

    // Write Your Code Here

    Node* temp = new Node(x);

 

    if(front == NULL){

        front = temp;

        rear = temp;

    }else{

        rear -> next = temp;

        rear = temp;

    }

}

 

int Queue::pop() {

    // Write Your Code Here

    if(front == NULL) return -1;

    Node* temp = front;

    front = front -> next;

    int el = temp -> data;

    delete temp;

    return el;

}