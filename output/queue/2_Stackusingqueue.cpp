class MyStack {
public:
    queue<int> q;
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int var=q.front();
        q.pop();
        return var;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.size()<1) return 1;
        else{
            return 0;
        }
    }
};
