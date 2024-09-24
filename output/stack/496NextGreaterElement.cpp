class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums2.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        stack<int> st;
        st.push(-1);
        for(int i=m-1;i>=0;i--){
            int ele=nums2[i];
            while(!st.empty() && ele>=st.top()){
                st.pop();
            }
            if(st.empty()){
                st.push(-1);
            }
            mp[ele]=st.top();
            st.push(ele);
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};