#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    sort(arr.begin(),arr.end());
    int i;
    int sum;
    vector<vector <int>> ans;
    for(i=0;i<n;i++){
        int start=i+1,end=n-1;
        sum=K-arr[i];
        while(start<end){
            if(arr[start]+arr[end]==sum){
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(start);
                temp.push_back(end);

                ans.push_back(temp);
            }
            else if(arr[start]+arr[end]>sum){
                end--;
            }
            else{
                start++;
                
            }

        }
        
    }
    return ans;
     
	
}