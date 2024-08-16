#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n;
        cin>>n;
        char str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        int no=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1'){
                no++;
            }
        }
        int flag=0;
        if(n<=2){
            for(int i=0;i<n;i++){
                if(str[i]=='1'){
                    cout<<"NO"<<endl;
                    flag=1;
                }
            }
        }
        if(flag==1){
            continue;
        }
        int flg=0;
        if(no==0){
            cout<<"YES"<<endl;
            continue;
        }
        if(no%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            int start=0;
            int end=n-1;
            while(start<end){
                while(str[start]!='1'){
                    start++;
                }
                while(str[end]!='1'){
                    end--;
                }
                if(start+1==end){
                    if(str[start]!=str[end]){
                        cout<<"NO";
                        flg=1;
                        break;
                    }
                    else{
                        cout<<"YES";
                        flg=1;
                        break;
                    }
                }
                start++;
                end--;

            }
            if(start>end && flg==0){
                cout<<"NO"<<endl;
            }
            else{
                if(flg==0){

                cout<<"YES"<<endl;
                }
            }
        }
    }
}