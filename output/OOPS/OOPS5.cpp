#include<iostream> 
using namespace std;
//Dynamic and static memory allocation

class Hero1{
    //properties 
    private :
    int health;
    public:
    char level;

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

};
int main(){
    cout<<"Static Memory ALlocation"<<endl;
    Hero1 a;
    a.setHealth(100);
    a.setLevel('B');
    cout<<"Level :"<<a.getLevel()<<endl;
    cout<<"Health :"<<a.getHealth()<<endl;

    cout<<"----------------------"<<endl;
    cout<<"Dynamic Memory Allocation"<<endl;
    Hero1 *b=new Hero1;
    // Hero1 *b=new Hero1() is the same
    b->setLevel('A');
    b->setHealth(85);
    cout<<"Level :"<<b->level<<endl;
    cout<<"Health "<<b->getHealth()<<endl;
    //or
    cout<<"Level :"<< (*b).level<<endl;
    cout<<"Health:"<< (*b).getHealth()<<endl;
    
}