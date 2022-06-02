//how a friend function accesses the private member of another class

#include<iostream>
using namespace std;

class myClass1{
    friend class myClass2;
    private:
        int x;
    public:
        myClass1(int a){
            x=a;
        }
};

class myClass2{
    public:
        myClass2(myClass1 obj){
            cout<<"The value of the private member of myClass1 is : "<<obj.x<<endl;
        }
};

int main(){
    //creating an object of myClass1 and passing the value of "a" as 5
    myClass1 obj1(5);
    //creating an object of myClass2 and passing the object of myClass1 as parameter
    myClass2 obj2(obj1);
}