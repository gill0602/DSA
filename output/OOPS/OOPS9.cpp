#include<iostream>
#include<cstring>
using namespace std;
// shallow copy example 
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
        cout<<"[ Name :"<<this->name<<" ,";
        cout<<"Health :"<<this->health<<" ,";
        cout<<"Level :"<<this->level<<" ]";
        cout<<endl;
    }

};

int main(){
    //shallow copy example
    Hero1 man1;
    man1.setHealth(12);
    man1.setLevel('S');
    char name[5]="GILL";
    man1.setName(name);
    man1.print();
    //use default copy constructor
    Hero1 man2(man1);
    // can also use Hero1 man2=man1;
    // or Hero1 man2=man1;
    
    man2.print();
    man1.name[0]='T';
    man1.print();
    man2.print();
    cout<<"Copy Assignment Operator Used"<<endl;
    man1=man2;
    man1.print();
    man2.print();

}