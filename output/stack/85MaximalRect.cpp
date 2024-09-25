class Solution {
private:
vector<int> nextSmaller(vector<int> arr,int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int ele=arr[i];
        while(st.top()!=-1 && arr[st.top()]>=ele ){
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}
vector<int> prevSmaller(vector<int> arr,int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int ele=arr[i];
        while(st.top()!=-1 && arr[st.top()]>=ele ){
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}

int maxarea(vector<int> heights,int n){
    stack<int> st;
    vector<int> next(n);
    vector<int> prev(n);

    next=nextSmaller(heights,n);
    prev=prevSmaller(heights,n);

    int area=INT_MIN;
    for(int i=0;i<n;i++){
        int l=heights[i];
        if(next[i]==-1){
            next[i]=n;
        }
        int b=next[i]-prev[i]-1;
        int curr_area=l*b;

        area=max(area,curr_area);
    }
    return area;
}

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> mat(m,vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1'){
                    mat[i][j]=1;
                }
                else{
                    mat[i][j]=0;
                }
            }
        }
        int area=maxarea(mat[0],n);
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]+=(mat[i-1][j])*mat[i][j];
            }
            area=max(area,maxarea(mat[i],n));
        }
        return area;
    }
};