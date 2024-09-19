//solution to check if the parantheses in a given expression are balanced or not

class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]==']' || s[i]==')' || s[i]=='}'){
                if(!st.empty()){
                    char ele=st.top();
                    if(ele=='(' && s[i]==')'
                    || ele=='{' && s[i]=='}'
                    || ele=='[' && s[i]==']'
                    ){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty();

    }
};