#include<iostream>
using namespace std;

class HelloWorld{
    public:
        //Constructor
        HelloWorld(){
            cout<<"Constructor is called"<<endl;
        }
        //Destructor
        ~HelloWorld(){
            cout<<"Destructor is called"<<endl;
        }
        void display(){
            cout<<"Hello World"<<endl;
        }
};

int main(){
    //an object is made for the class HelloWorld
    HelloWorld obj;
    //display method inside the HelloWorld class is called using the object obj
    obj.display();
}