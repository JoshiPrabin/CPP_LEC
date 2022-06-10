#include<iostream>
using namespace std;

class Base{
    public:
        void print(){
            cout<<"Base class"<<endl;
        }
};

class Derived: public Base{
    public:
        void print(){
            cout<<"Derived class"<<endl;
            Base::print();
        }
};

int main(){
    Derived d1,d2;
    d1.print();
    d2.Base::print();
}