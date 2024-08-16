#include<iostream> 
using namespace std;
//setter and getter 
// accessing private attributes of the class externally
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
    Hero1 ramesh;
    cout<<"Size of class :"<<sizeof(ramesh)<<endl;
    //The size of this class is 8 bytes. Even though char c will consume only 1 byte, 4 bytes will be allocated for it, and the remaining 3 bytes will be wasted (holes). This is because the next member is an int, which takes 4 bytes. If we don't go to the next (4th) byte for storing this integer member, the memory access/modify cycle for this integer will be 2 read cycles. So the compiler will do this for us, unless we specify some byte padding/packing.

    cout<<"Ramesh's Health "<<ramesh.getHealth()<<endl;//garbage value
    ramesh.setHealth(70);
    ramesh.level='A';
    cout<<"New Health "<<ramesh.getHealth()<<endl;
    cout<<"Level "<<ramesh.level<<endl;
    return 0;
}