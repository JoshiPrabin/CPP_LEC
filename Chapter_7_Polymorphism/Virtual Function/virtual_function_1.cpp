#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void move()=0;
};

class Dog: public Animal{
    public:
        void move(){
            cout<<"dog runs"<<endl;
        }
        
};

int main(){
    Animal an; //object of abstract class type "Animal" is not allowed
    an.move();
}