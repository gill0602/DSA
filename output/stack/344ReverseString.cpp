class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<int> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            st.push(s[i]);
        }
        int i=0;
        while(!st.empty()){
            char ch=st.top();
            s[i++]=ch;
            st.pop();
        }
    }
};
