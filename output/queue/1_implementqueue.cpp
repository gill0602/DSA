#include <bits/stdc++.h> 
class Queue {
public:
    int * arr;
    int qfront;
    int rear;
    int size;
    Queue() {
        // Implement the Constructor
        size=100001;
        arr=new int [size];
        qfront=rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size){
            //queue is full
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=rear=0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(isEmpty()) return -1;
        return arr[qfront];
    }
};