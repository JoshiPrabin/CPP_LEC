#include<iostream>
using namespace std;

class base{
    public:
        base(){
            cout<<"this is the constructor of base class"<<endl;
        }
        virtual void display(){
            cout<<"base class"<<endl;
        }
        ~base(){
            cout<<"this is the destructor of base class"<<endl;
        }
};

class derived: public base{
    public:
        derived(){
            cout<<"this is the constructor of base class"<<endl;
        }
        ~derived(){
            cout<<"this is the destructor of derived class"<<endl;
        }
};

int main(){
    base *b;
    b = new derived;
    b->display();
    delete b; //destructor of derived class is not invoked
    return 0;
}