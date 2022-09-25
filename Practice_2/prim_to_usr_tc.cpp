#include<iostream>
using namespace std;

class complex{
    private:    
        int real,imag;
    public:
        complex(){}
        complex(int a){
            real = a;
            imag = 0;
        }
        void showdata(){
            cout<<real<<" + i"<<imag<<endl;
        }
};

int main(){
    complex c1;
    int x = 5;
    c1 = x;
    c1.showdata();
    return 0;
}