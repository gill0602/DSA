#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int tt=0;tt<num;tt++){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if(j%2==0){
                        cout<<"##";
                    }
                    else{
                        cout<<"..";
                    }
                }
                cout<<endl;
                for(int j=0;j<n;j++){
                    if(j%2==0){
                        cout<<"##";
                    }
                    else{
                        cout<<"..";
                    }
                }
                cout<<endl;
            }
            else{
                for(int j=0;j<n;j++){
                    if(j%2!=0){
                        cout<<"##";
                    }
                    else{
                        cout<<"..";
                    }
                    
                }
                cout<<endl;
                for(int j=0;j<n;j++){
                    if(j%2!=0){
                        cout<<"##";
                    }
                    else{
                        cout<<"..";
                    }
                }
                cout<<endl;
            }
        }
    }
}