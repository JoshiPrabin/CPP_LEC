#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"Eating...."<<endl;
        }
};

class Dog: public Animal{
    public:
        void bark(){
            cout<<"Barking..."<<endl;
        }
};

int main(){
    Dog d1;
    Animal a1;
    a1.eat();
    // a1.bark(); {The object of base class cannot access the data member of derived class}
    d1.eat();
    d1.bark();
}