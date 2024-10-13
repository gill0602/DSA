#include<bits/stdc++.h>
vector<int> firstNegative(vector<int> arr, int n, int k) {
	// Write your code here.
    vector<int> ans;
    deque<int> dq;
    //first window indexes
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }
    //first window answer
    if(dq.size()==0){
        ans.push_back(0);
    }
    else{
        ans.push_back(arr[dq.front()]);
    }
    //rest of the windows
    for(int i=k;i<n;i++){
        if(!dq.empty() && i-dq.front()>=k){
            dq.pop_front();
        }
        if(arr[i]<0){
            dq.push_back(i);
        }

        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}