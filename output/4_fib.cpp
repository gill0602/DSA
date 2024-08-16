#include<iostream>
using namespace std;

int main() {
    int n=10;

    int a=0;
    int b=1;
    int sum,i;
    cout<<a<<endl;
    cout<<b<<endl;
    for(i=0;i<n;i++){
        sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }
}