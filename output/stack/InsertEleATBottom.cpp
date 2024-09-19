//insert element at the bottom of the stack
class Solution{
private:
    void solve(stack<int>& st,int cnt,int n,int x){
        if(cnt==n){
            st.push(x);
            return;
        }
        int ele=st.top();
        st.pop();
        solve(st,cnt+1,n,x);
        st.push(ele);
    }
public:
    stack<int> insertAtBottom(stack<int>& st,int x){
        int cnt=0;
        solve(st,cnt,st.size(),x);
        return st;
    }
};