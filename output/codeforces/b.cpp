#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(long long n){
    long long sum=0;
    long long no=n;

        sum=sum+ no/15;
        no=no%15;
        sum=sum+ no/10;
        no=no%10;
        sum=sum+ no/6;
        no=no%6;
        sum=sum+ no/3;
        no=no%3;
        sum=sum+ no/1;
        no=no%1;
        cout<<sum<<endl;
}
int main(){
    long long t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        long long n;
        cin>>n;
        solve(n);
    }
    return 0;
}