#include<iostream>
using namespace std;
//accessing properties
class Hero1{
    //properties
    public:
    int health;
    
    char level;

    void print(){
        cout<<level<<endl;

    }
};
int main(){
    Hero1 ramesh;
    cout<<"Before"<<endl; //Garbage values are stored
    cout<<"Health:"<<ramesh.health<<endl;
    cout<<"Level :"<<ramesh.level<<endl;

    ramesh.health=50;
    ramesh.level='A';
    cout<<"After"<<endl;
    cout<<"Health:"<<ramesh.health<<endl;
    cout<<"Level :"<<ramesh.level<<endl;
}