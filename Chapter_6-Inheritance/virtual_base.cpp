//an example of virtaul class

#include<iostream>
using namespace std;

class A{
    public:
        void displaya(){
            cout<<"This is the output from class A"<<endl;
        }
};

class B: public virtual A{
    public:
        void displayb(){
        cout<<"This is the output from class B"<<endl;
        }
};

class C: public virtual A{
    public:
        void displayc(){
        cout<<"This is the output from class C"<<endl;
        }
};

class D: public B,public C{
    public:
        void displayd(){
            cout<<"This is the output of clacc D"<<endl;
        }
};

int main(){
    D d;
    d.displaya(); 
}