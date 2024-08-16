#include<iostream>
using namespace std;
// inheritence
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
    void common(){
        cout<<"This is Human"<<endl;
    }
};
class Male: public Human{
    public:
    string color;

    public:
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    void common(){
        cout<<"This is Male"<<endl;
    }
};
int main(){
    Male Object1;
    cout<<Object1.height<<endl;
    cout<<Object1.weight<<endl;
    cout<<Object1.age<<endl;

    cout<<Object1.color<<endl;
    Object1.setWeight(84);
    cout<<Object1.weight<<endl;
    Object1.sleep();

    Male n;
    n.Human::common();//using acope resolution operator
    n.Male::common();
}
