#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[]){
    int mxsum=INT_MIN;
    int sm=0;
    for(int i=0;i<arr.size();i++){
        sm=(sm+arr[i])%1000000007;
        if(sm>mxsum){
            mxsum=sm;
        }
        if(sm<0){
            sum=0;
        }
    }
    return mxsum;
}
int main(){
    long long t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long tot=0;
        for(int i=0;i<n;i++){
            tot=tot+arr[i];
        }
        int s=0;
        tot=tot-kadane(arr);
        while(k){
            
        }
    }

}