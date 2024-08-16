#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int i=0;
    int ans=0;
    cin>>n;
    while(n!=0){

        
        int dig=n%10;
        if(dig==1){
        ans= pow(2,i) +ans;

        }
    
        i=i+1;
        n=n/10;
    }
    cout<<ans;
}