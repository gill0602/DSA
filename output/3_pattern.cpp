#include<iostream>
using namespace std;
int main(){
    
    int n,i,j;
    cout<<"Enter the size of pattern";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<"Printing Pattern 2";
    cout<<endl;
    for(i=n;i>0;i--){
        for(j=n;j>0;j--){
            cout<<i;
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 3";
    cout<<endl;
    for(i=n;i>0;i--){
        for(j=n;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<"Printing Pattern 4";
    cout<<endl;
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<"Printing Pattern 5";
    cout<<endl;
    int x=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<x;
            x++;
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 6";
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 7";
    cout<<endl;
    x=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<x;
        }
        x=x+1;
        cout<<endl;
    }
    x=1;
    cout<<"Printing Pattern 8";
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<x;
            x++;
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 9";
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i-j+1;
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 10";
    cout<<endl;
    int ch=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<char(ch);
        }
        ch++;
        cout<<endl;
    }

    cout<<"Printing Pattern 11";
    cout<<endl;
    ch=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<char(ch);
            ch++;
        }
        ch=65;
        cout<<endl;
    }

    cout<<"Printing Pattern 12";
    cout<<endl;
    ch=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<char(ch);
            ch++;
        }
        cout<<endl;
    }
    cout<<"Printing Pattern 13";
    cout<<endl;
    ch=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<char(ch);
            ch++;
        }
        ch=ch-2;
        cout<<endl;
    }

    cout<<"Printing Pattern 14";
    cout<<endl;
    ch=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<char(ch);
        }
        ch++;
        cout<<endl;
    }

    cout<<"Printing Pattern 15";
    cout<<endl;
    ch=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<char(ch);
            ch++;
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 16";
    cout<<endl;
    ch=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<char(ch);
            ch++;
        }
        ch=ch-i+1;
        cout<<endl;
    }

    cout<<"Printing Pattern 17";
    cout<<endl;
    ch=65+n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<char(ch);
            ch++;
        }
        ch=ch-i-1;
        cout<<endl;
    }
    cout<<"Printing Pattern 18";
    cout<<endl;
    for(i=1;i<=n;i++){
        int space=n-i;
        while(space>=0){
            cout<<" ";
            space--;
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 19";
    cout<<endl;
    for(i=1;i<=n;i++){

        for(j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 20";
    cout<<endl;
    for(i=1;i<=n;i++){
        int space=i-2;
        while(space>=0){
            cout<<" ";
            space--;
        }
        for(j=1;j<=n-i+1;j++){
            cout<<i;
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 21";
    cout<<endl;
    for(i=1;i<=n;i++){
        int space=n-i-1;
        while(space>=0){
            cout<<" ";
            space--;
        }
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 22";
    cout<<endl;
    x=1;
    for(i=1;i<=n;i++){
        int space=n-i-1;
        while(space>=0){
            cout<<" ";
            space--;
        }
        for(j=1;j<=i;j++){
            cout<<x;
            x++;
        }
        cout<<endl;
    }

    cout<<"Printing Pattern 23";
    cout<<endl;
    x=1;
    int z;
    for(i=1;i<=n;i++){
        int space=n-i-1;
        while(space>=0){
            cout<<" ";
            space--;
        }
        for(j=1;j<=i;j++){
            cout<<x;
            x++;
        }
        x=1;
        int start=i-1;
        while (start)
        {
            cout<<start;
            start=start-1;
        }
        

        cout<<endl;
    }

    







}
