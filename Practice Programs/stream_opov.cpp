#include<iostream>
using namespace std;
class complex{
    int real,imag;

    public:
        complex(){
            real = 1;
            imag = 2;
        }
         friend istream& operator >>(istream&, complex obj);
         friend ostream& operator <<(ostream&, complex obj);
};
istream& operator >>(istream& input, complex obj){
    cout<<"\n enter real: ";
    input>>obj.real;
    cout<<"\n enter imag: ";
    input>>obj.imag;
    return input;
}

ostream& operator <<(ostream& output, complex obj){
    cout<<"\n the complex number is: "<<obj.real<<"+ i"<<obj.imag<<endl;
    return output;
}

int main(){
    complex s;
    cin>>s;
    cout<<s; //prints the value specified in the constructor
    return 0;
}