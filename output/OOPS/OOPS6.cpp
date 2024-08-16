#include<iostream> 
#include<cstring>
using namespace std;
//Constructor introduction

class Hero1{
    //properties 
    private :
    int health;
    public:
    char *name;
    char level;

    Hero1(){
        cout<<"Constructor Called"<<endl; // this is default constructor
        name =new char[100];
    }
    Hero1(int health){
        cout<<"this->"<<this<<endl;  // this is parameterized constructor
        this->health=health;
    }
    Hero1(int health , char level){ // two parameters passed 
        this->health=health;
        this->level=level;
    }
    //copy constructor
    Hero1(Hero1& temp){ // passed by reference
        cout<<"Copy Constructor"<<endl;
        this->health=temp.health;
        this->level=temp.level;  
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    void print(){
        cout<<"Name :"<<this->name<<" ,";
        cout<<"Health :"<<this->health<<" ,";
        cout<<"Level :"<<this->level<<" ,";
        cout<<endl;
    }

};

int main(){
    //cout<<"hi"<<endl;
    Hero1 a(10);
    cout<<"Address of a is :"<<&a<<endl;
    //value of this and address of a is same because this stores the address of a
    //cout<<"hello"<<endl;

    Hero1 *b=new Hero1();//empty constructor is called

    Hero1 c(55,'Z');
    cout<<"Health :"<<c.getHealth()<<endl;
    cout<<"Level :"<<c.getLevel()<<endl;


    //copy constructor example
    Hero1 ramesh(84,'U');
    ramesh.print();
    Hero1 suresh(ramesh);
    suresh.print();


    


}