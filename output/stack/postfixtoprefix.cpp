#include<bits/stdc++.h>
string postfixToPrefix(string &s){
    // Write your code here.
    int n=s.size();
    stack<string> st;
    for(int i=0;i<n;i++){
        if(isalnum(s[i])) st.push(string(1,s[i]));
        else{
            string s1=st.top();
            st.pop();
            string s2=st.top();
            st.pop();
            st.push(s[i]+s2+s1);
        }
    }
    return st.top();
}