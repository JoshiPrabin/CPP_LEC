#include<iostream>
using namespace std;

class rough{
    public:
        int a=1;
};

int main(){
    rough r1;
    cout<<"Primitive type increment: "<<r1.a++<<endl;
    cout<<"User defined type increment: "<<r1++<<endl; //error: ++ operator doesn't match these operands because the datatype is not primitive
}