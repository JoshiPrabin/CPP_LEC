#include<iostream>
using namespace std;

class construct{
 public:
    int a,b;
    construct(){
        cout<<"Constructor is called "<<endl;
        a=10,b=20;}
    void display(){
        cout<<"My name is Prabin Joshi"<<endl;
    }
};

int main()
{
    int a,b;
    construct c1;
    c1.display();
    cout<<a<<endl;
    cout<<b<<endl;
}