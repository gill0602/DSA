// 2 Approaches both O(n) space and time 
#include <bits/stdc++.h> 
void reverse(queue < int > & q) {
    // Write your code here.
     int n=q.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(q.front());
            q.pop();
        }
        for(int i=0;i<n;i++){
            q.push(st.top());
            st.pop();
        }
    
}

//Using recursion
void reverse(queue < int > & q) {
    // Write your code here.
    if(q.empty()) return ;
    int val=q.front();
    q.pop();
    reverse(q);
    q.push(val);
}