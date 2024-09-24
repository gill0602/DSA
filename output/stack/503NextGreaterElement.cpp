class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for(int i=nums.size()-1;i>=0;i--){
            int ele=nums[i];
            while(!st.empty() && ele>=st.top()){
                st.pop();
            }
            if(st.empty()){
                st.push(-1);
            }
            if(i<n){
                ans[i]=st.top();
            }
            st.push(ele);
            
        }
        return ans;
    }
};