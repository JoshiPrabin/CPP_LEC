//constructor in base and derived classes
//without default constructor

#include<iostream>
using namespace std;

class base{
    public:
        base(int data){
            cout<<"parameterized constructor from base class"<<endl;
        }
};

class derived: public base{
    public:
        derived(int data){ //error: since there is no explicit call to the base class constructor
            cout<<"parameterized constructor from derived class"<<endl;
        }
};

int main(){
    derived d(5);
}