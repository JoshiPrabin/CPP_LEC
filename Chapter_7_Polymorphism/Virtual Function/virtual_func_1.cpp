#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void move()=0;
};

class Dog: public Animal{
    public:
        void move(){
            cout<<"dog move"<<endl;
        }
        
};

int main(){
    Animal *an;
    Dog d;
    an = &d;
    an->move();
}