#include<iostream>
using namespace std;

class One{
    public:
        int a=10;

        void displayA(){
            cout<<"The value in a is"<<a<<endl;
        }
};

class Two{
    public:
        int b=10;

        void displayB(){
            cout<<"The value in b is"<<b<<endl;
        }
};

int main(){
    One x;
    Two y;
    cout<<"The sum is:"<<x+y<<endl;
}