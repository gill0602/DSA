/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here
    Node* top;
    int size;

public:
    Stack()
    {
        //Write your code here
        top=NULL;
        size=0;

    }

    int getSize()
    {
        //Write your code here
        size=0;
        Node* tmp=top;
        while(tmp){
            tmp=tmp->next;
            size++;
        }
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
        if(!top) return 1;
        else return 0;
    }

    void push(int data)
    {
        //Write your code here
        Node* newNode=new Node(data);
        newNode->next=top;
        top=newNode;
        size++;
    }

    void pop()
    {
        //Write your code here
        if(top){
            
        Node* tmp=top;
        top=top->next;
        delete(tmp);
        size--;
        }
    }

    int getTop()
    {
        //Write your code here
        if(!top) return -1;
        return top->data;
    }
};