#include <bits/stdc++.h> 

int getmax(vector<int> arr ,int n){
    int mx=arr[0];
    for(int i=1;i<n;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    return mx;
}
void countingsort(vector<int>& arr,int n,int place){
    int output[n];
    int count[10]={0};

    for(int i=0;i<n;i++){
        count[(arr[i]/place)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        output[count[(arr[i]/place)%10]-1]=arr[i];
        count[(arr[i]/place)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}
void rdixSort(int n, vector<int>& arr) {
    // Write your code here.
    int max=getmax(arr,n);
    for(int place=1;max/place>0;place=place*10){
        countingsort(arr,n,place);
    }
}
vector<int> radixSort(int n,vector<int>&arr){
    rdixSort(n, arr);
    return arr;
}