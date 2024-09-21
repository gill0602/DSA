#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    int n=s.size();
    stack<char> st;
    for(int i=0;i<n;i++){
        char ch=s[i];
        if(ch=='('|| ch=='+'||ch=='-'||ch=='/'||ch=='*'){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool isRed=true;
                while(st.top()!='('){
                    char ele=st.top();
                    if(ele=='+'||ele=='-'||ele=='/'||ele=='*'){
                        isRed=false;
                    }
                    st.pop();
                }
                if(isRed==true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
