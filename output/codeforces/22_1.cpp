#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        
        int op=0;
        if(n%2==0){
            int md=n/2 -1;
            int x=arr[md];
            int cnt=1;
            for(int i=md+1;i<n;i++){
                if(arr[i]==x){
                    cnt++;
                }
                else{
                    break;
                }
            }
            cout<<cnt<<endl;
        }
        else{
            int md=n/2;
            int x=arr[md];
            int cnt=1;
            for(int i=md+1;i<n;i++){
                if(arr[i]==x){
                    cnt++;
                }
                else{
                    break;
                }
            }
            cout<<cnt<<endl;
        }

    
    }

    return 0;
}