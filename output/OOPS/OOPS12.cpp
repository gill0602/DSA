#include<iostream>
using namespace std;
// static member and static function
class Hero{
    public:
    int name;
    int no;
    static int life;

    static int random(){
        return life;
    }
};
int Hero::life=100;
int main(){
    cout<<"Static Keyword :"<<Hero::life<<endl;

    //we can also create an object and access it but its value remains same for every object 
    Hero human1;
    cout<<"Using object"<<human1.life<<endl;
    
    Hero human2;
    human2.life=90;
    
    cout<<"Using human1"<<human1.life<<endl;
    cout<<"Using human2"<<human2.life<<endl;


    cout<<"Using static function"<<Hero::random()<<endl;
    return 0;
}
