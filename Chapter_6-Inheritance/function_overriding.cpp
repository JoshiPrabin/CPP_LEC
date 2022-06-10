#include<iostream>
using namespace std;

class Base{
    public:
        void print(){
            cout<<"This is base class"<<endl;
        }
};

class Derived: public Base{
    public:
        void print(){
            cout<<"This is derived class"<<endl;
        }
};

int main(){
    Derived d1;
    d1.print();
}