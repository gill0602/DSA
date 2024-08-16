#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    for(int x=0;x<tt;x++){
        int n;
        cin>>n;
        int cnt=0;
        int flag=1;
        if(n==1){
            cout<<"YES"<<endl;
            flag=0;
        }
        vector<int> factors;
        for( int i=n;i>=1 && flag;i--){
            if(n%i==0){
                int num=i;
                while(num){
                    int dig=num%10;
                    if(dig!=0 && dig!=1){
                        break;
                    }
                    num=num/10;
                }
                if(num==0){
                    factors.push_back(i);
                    cnt++;
                }
            
            }
        }
        for(int i=0;i<cnt && flag;i++){
            
            for(int j=0;j<cnt;j++){
                if(factors[i]*factors[j]==n){
                    cout<<"YES"<<endl;
                    flag=0;
                    break;
                }
            }
            
        }
        if(flag!=0 && n!=1){
            cout<<"NO"<<endl;
        }
        

    }
}