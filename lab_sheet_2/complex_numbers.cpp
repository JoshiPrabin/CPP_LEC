//WAP to add two complex numbers passing object as an argument and returning resultant complex number.

#include<iostream>
using namespace std;

class complex{
    private:
        double real,imaginary;
    public:
        void input(){
            cout<<"\nEnter real part: ";
            cin>>real;
            cout<<"\nEnter imaginary part: ";
            cin>>imaginary;
        }
        double rsum(complex c1, complex c2){
            double realSum = c1.real+c2.real;
            return realSum;
        }
        double isum(complex c1, complex c2){
            double imagSum = c1.imaginary+c2.imaginary;
            return imagSum;
        }
};

int main(){
    complex num1,num2,result;
    num1.input();
    num2.input();
    cout<<"The sum is: "<<result.rsum(num1,num2)<<" + i"<<result.isum(num1,num2);
}