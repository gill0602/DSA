#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;
    st.push(-1);
    vector<int> nums(n);
    for(int i=n-1;i>=0;i--){
        int ele=arr[i];
        while (ele <= st.top()) {
          st.pop();
        }
        nums[i]=st.top();
        st.push(ele);
    }
    return nums;
}