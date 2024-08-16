#include<iostream>
using namespace std;
int main(){
    char s[]= "hello";
    char *pt = s;
    cout << s[0] << " " << pt[0]<<endl;

    char arr[20];
    int i;
    for(i=0;i<10;i++){
        *(arr+i)=65+i;
    }
    *(arr+i)='\0';
    cout<<arr<<endl;

    char *ptr;
    char Str[]="abcdefg";
    ptr=Str;//ptr becomes a character array too
    ptr=ptr+5;
    cout<<ptr<<endl;
    
    int numbers[5];
    int *p;
    p=numbers;
    *p=10;
    p=&numbers[2];
    *p=20;
    p--;
    *p=30;
    p=numbers + 3;
    *p=40;
    p=numbers;
    *(p+4)=50;

    for(int x=0;x<5;x++){
        cout<<numbers[x]<<",";
    }
    cout<<endl;

    char st[]="ABCD";
    for(i=0;st[i]!='\0';i++){
        cout<< st[i]<<*(st)+i<<*(i+st)<<i[st];
    }
    

    return 0;
}