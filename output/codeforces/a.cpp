#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(vector<long long> arr){
    long long n=arr.size();
    sort(arr.begin(),arr.end());
    cout<<abs(arr[0]-arr[n-1])+ abs(arr[n-1]-arr[1])+abs(arr[1]-arr[n-2]) +abs(arr[n-2]-arr[0])<<endl;
}
int main(){
    long long t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr);
    }
    return 0;
}