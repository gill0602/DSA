#include<iostream>
using namespace std;

#include "Hero.cpp"
// or if we dont want to import , we can create a class in file itself
class Hero1{
    int health;
    char level;
};
int main(){
    Hero1 suresh;
    cout<<"Size will be :"<<sizeof(suresh)<<endl;
    //8 will be printed 
    //if there are no properties ,default of size 1 bit is allocated
}