#include<iostream>
using namespace std;

class complex{
    private:
        int real, imag;
    public:
        complex(){}
        complex(int x, int y){
            real = x;
            imag = y;
        }
        void showdata(){
            cout<<real<<" + i"<<imag<<endl;
        }
        operator int(){
            return real;
        }
};

int main(){
    complex c1(2,3);
    int x;
    x = c1;
    c1.showdata();
    cout<<x<<endl;
    return 0;
}