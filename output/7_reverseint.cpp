#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans,dig;
    while(n!=0){
        dig=n%10;
        ans=ans*10+dig;
        n=n/10;
    }
    cout<<ans;
}