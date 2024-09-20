class Solution{
public:
    void insertAtBottom(stack<int>& st,int ele){
        if(st.empty()){
            st.push(ele);
            return;
        }
        int num=st.top();
        st.pop();
        //recursive function to reach the bottom 
        insertAtBottom(st,ele);
        st.push(num);
    }
public:
    void Reverse(stack<int>&stack){
        if(stack.empty()){
            return;
        }
        int num=stack.top();
        stack.pop();
        Reverse(stack);
        insertAtBottom(stack,num);
    }
};