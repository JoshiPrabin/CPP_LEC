// after overloading the operator, it can be applied to an object in the same way as it is applied to the basic types

#include<iostream>
using namespace std;

class count{
    private:
        int value;
    public: 
        count(){
            value = -5;
        }

        void operator ++(){
            value = value + 100;
        }

        void display(){
            cout<<"The value in 'value' is: "<<value<<endl;
        }
};

int main(){
    count x;
    x.display();
    ++x;
    x.display();
    return 0;
}