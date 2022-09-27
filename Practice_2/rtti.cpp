//RTTI or Run TIme Type Information is one of the features that is available in a languae showing run time polymorphic behavioue like c++.
//If the base class pointer is holding the address of the object of it's derived class then the type of the object the base class pointer points is known at run time only.
//The operators dynamic_cast and typeid provide us RTTI.

#include<iostream>
using namespace std;

class animal{
    public:
        void virtual eat(){
            cout<<"Eating..."<<endl;
        }
};
class dog: public animal{
    public:
        void bark(){
            cout<<"Barking...."<<endl;
        }
};
int main(){
    animal *panm,anm;
    dog *dg,d;
    panm = &d;
    dg = dynamic_cast<dog*>(panm);
    if (dg)
    {
        cout<<"Cast succeeded."<<endl;
    }
    else{
        cout<<"Cast failed."<<endl;
    }

    panm=&anm;
    dg=dynamic_cast<dog*>(panm);
    if (dg)
    {
        cout<<"Cast succeeded."<<endl;
    }
    else{
        cout<<"Cast failed."<<endl;
    }
    
}