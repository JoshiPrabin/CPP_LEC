//passing parameters to multiple constructors
#include<iostream>
using namespace std;

class base_one{
    public:
        base_one(){
            cout<<"no parameter constructor from base_one class"<<endl;
        }
        base_one(int x){
            cout<<"parameterized constructor from base_one class"<<endl;
        }
};

class base_two{
    public:
        base_two(){
            cout<<"no parameter constructor from base_two class"<<endl;
        }
        base_two(int x){
            cout<<"parameterized constructor from base_two class"<<endl;
        }
};

class derived: public base_one, public base_two{
    public:
        derived(){
            cout<<"no parameter constructor from derived class"<<endl;
        }
        derived(int x, int y, int z):base_one(x),base_two(y){
            cout<<"parameterized constructor from derived class"<<endl;
        }
};

int main(){
    derived d1;
    derived d(1,2,3);
}