#include<bits/stdc++.h>

string preToPost(string s) {
    // Write Your Code Here
    int n=s.size();
    stack<string> st;
    for(int i=n-1;i>=0;i--){
        if(isalnum(s[i])) st.push(string(1,s[i]));
        else{
            string s1=st.top();
            st.pop();
            string s2=st.top();
            st.pop();
            st.push(s1+s2+s[i]);
        }
    }
    return st.top();
}