#include<iostream>
using namespace std;
//use of access modifiers
class Hero1{
    //properties
    public:
    int health;
    //health can be accessed inside as well as outside of the class
    private:
    char level;

    void print(){
        cout<<level<<endl;
        //level is private ,can be only accessed inside the class;
    }
};
int main(){
    Hero1 ramesh;
    cout<<"Health:"<<ramesh.health<<endl;
    cout<<"Level :"<<ramesh.level<<endl;//this line will give error
}