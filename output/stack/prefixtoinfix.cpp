class Solution {
  public:
    string preToInfix(string s) {
        // Write your code here
        stack<string> st;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(isalnum(s[i])) st.push(string(1,s[i]));
            
            else{
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                st.push('('+s1+s[i]+s2+')');
            }
        }
        return st.top();
    }
};