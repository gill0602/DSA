class Solution {
  public:
  bool knows(vector<vector<int>>& mat,int a,int b){
      if(mat[a][b]==1){
        return true;
      }
      else 
        return false;
  }
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int n=mat.size();
        //insert elements into stack
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        //compare elements of the stack
        while(st.size()>1){
            int a=st.top();
            st.pop();
            
            int b=st.top();
            st.pop();
            
            if(knows(mat,a,b)){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        int ans=st.top();
        bool rowCheck=true;
        bool colCheck=true;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(mat[ans][i]!=0){
                rowCheck=false;
            }
            if(mat[i][ans]==1){
                cnt++;
            }
        }
        if(cnt!=n-1){
            colCheck=false;
        }
        if(rowCheck && colCheck) return ans;
        else return -1;
        
    }
};