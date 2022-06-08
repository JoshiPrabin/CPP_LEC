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
        complex sum(complex c1,complex c2){
            complex result;
            result.real = c1.real+c2.real;
            result.imaginary = c1.imaginary+c2.imaginary;
            return result;
        }
        void display(complex result){
                cout<<"The sum is: "<<result.real<<"+i "<<result.imaginary<<endl;
        }
        // double rsum(complex c1, complex c2){
        //     double realSum = c1.real+c2.real;
        //     return realSum;
        // }
        // double isum(complex c1, complex c2){
        //     double imagSum = c1.imaginary+c2.imaginary;
        //     return imagSum;
        // }
};

int main(){
    complex num1,num2,result1;
    num1.input();
    num2.input();
    result1.display(result1.sum(num1,num2));
    // cout<<"The sum is: "<<result.rsum(num1,num2)<<" + i"<<result.isum(num1,num2);
}