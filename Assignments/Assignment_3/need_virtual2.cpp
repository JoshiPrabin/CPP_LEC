// need of virtual function

#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void display(){
            cout<<"\n from base class animal";
        }
};

class Cow: public Animal{
    public:
        void display(){
            cout<<"\n from derived class Cow";
        }
};

class Dog: public Animal{
    public:
        void display(){
            cout<<"\n from derived class Dog";
        }
};

int main(){
    Animal *panm; //pointer to base class
    Animal anm;
    Cow cw;
    Dog dg;

    panm=&anm;
    panm->display();

    panm=&cw;
    panm->display();

    panm=&dg;
    panm->display();

    return 0;
}