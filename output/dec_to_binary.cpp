#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int no;
    vector<int> arr;
    cin>>no;
    while(no){
        int bt=no&1;
        no=no>>1;
        arr.push_back(bt);
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
        
    }
}