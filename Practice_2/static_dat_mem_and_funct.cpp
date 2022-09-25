// We know that when we create any number of objects of a class, each object has it's own copy of the data member
// i.e. we can use different objects with same data member to store different values.
// Upon declaring the data member static, the same data member is shared among the objects.
// A use case of static data member and static function could be to keep count of the number of objects created.

#include<iostream>
using namespace std;

class A{
    private:    
        int x;
        static int count; //declaring a static data member
    public:
        A(){
            count++; // upon creating an object count increases by 1
        }

        static void getcount(){ // a static member function
            cout<<"\nCount= "<<count; // a static member function can only work with static data member
        }
};

int A::count = 0; // initializing a static data member

int main(){
    A::getcount(); // count = 0
    A obj1;
    obj1.getcount(); // count = 1;
    A obj2;
    A::getcount(); // count = 2;
    return 0;
}