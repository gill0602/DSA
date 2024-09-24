//count the number of greater elements to the right of the numbers in the given query
#include<bits/stdc++.h>
vector<int> countGreater(vector<int>&arr, vector<int>&q) {
    // Write your code here.
    int m=arr.size();
    int n=q.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        int ele=arr[q[i]];
        int cnt=0;
        for(int j=q[i]+1;j<m;j++){
            if(ele<arr[j]) cnt++;
        }
        ans.push_back(cnt);
    }
    return ans;
}