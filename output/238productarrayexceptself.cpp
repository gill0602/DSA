class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
    int n=arr.size();
    vector<int> ans(0,n);
    long long int temp=1;
    
    for(int i=0;i<n;i++){
        ans.push_back(temp);
        temp=(temp*arr[i]);
    }
    temp=1;
    for(int i=n-1;i>=0;i--){
        ans[i]=(ans[i] *temp);
        temp=(temp*arr[i]);
    }
    return ans;
}
    
};