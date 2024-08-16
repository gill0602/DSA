#include<iostream>
using namespace std;
//polymorphism function overloading 
class A{
    public:
    void sayHello(){
        cout<<"Hello Gill"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
    int sayHello(char name){
        cout<<"Hello "<<name<<endl;
        return 1;
    }
    //using default arguments for function overloading
    void add(int a ,int b,int c=0,int d=0){
        cout<<"Sum is :"<<a+b+c+d<<endl;
    }

};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"Output is :"<<value2-value1<<endl;
    }

    void operator() (){
        cout<<"Overloading Done ,value of a is : "<<this->a<<endl;
    }
};

//runtime polymorphism
class Animal{
    public:
    void voice(){
        cout<<"Sound of the animal"<<endl;
    }
};
class Dog:public Animal{
    public :
    void voice(){
        cout<<"Dog Barks!"<<endl;
    }
};
class Cat:public Animal{
    public :
    void voice(){
        cout<<"Cat Meows!"<<endl;
    }
};
int main(){
    //function overloading 
    A obj;
    obj.sayHello();
    obj.sayHello('A');
    obj.sayHello("Mitthu Don");

    obj.add(10,20);
    obj.add(10,20,30);
    obj.add(10,20,30,40);

    //operator overloading 
    B obj1,obj2;

    obj1.a=4;
    obj2.a=7;
    obj1 + obj2; //here the operator performs subtraction

    obj1(); //bracket overloaded 

    //runtime polymorphism - method overriding 
    Dog german;
    Cat persian;
    german.voice();
    persian.voice();

    
}