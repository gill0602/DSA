#include<iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    for(int x=0;x<tt;x++){
        char arr[5];
        
        for(int y=0;y<5;y++){
            cin>>arr[y];
        }
        string tm;
        int no= (arr[0]-'0')*10 + (arr[1]-'0');
    
        if(no<12 && no!=0){
            tm="AM";
        }
        else if(no==0){
            no=12;
            tm="AM";
        }
        else if( no==12){
            tm="PM";
        }
        else{
            tm="PM";
            no=no-12;
        }
        string ans="";
        if(no<10){
            ans='0'+ to_string(no)+":" +arr[3]+arr[4]+" "+tm;

        }
        else{
            ans=to_string(no)+":" +arr[3]+arr[4]+" "+tm;
        }
        cout<<ans<<endl;

        
    }
}