// accessing members of objects

#include<iostream>
using namespace std;

class test{
    public:
        int data;

        test(){
            cout<<"\n Constructor test() is called"<<endl;
            data = 55;
        }
        ~test(){
            cout<<"\n Destructor test() is called"<<endl;
        }

        void show(){
            cout<<"\n data is : "<<data<<endl;
        }
};

int main(){
    test *ptr;
    test tobj; //constructor is invoked here
    //store the address of statically created object tobj
    ptr =&tobj;
    cout<<"\n accessing object through tobj.show()...";
    tobj.show();
    cout<<"\n accessing object through ptr -> show()...";
    ptr->show();
    return 0;
}