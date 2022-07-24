#include<iostream>
using namespace std;
int main(){
    float quot=1.1, quot1;
    int num=3,num1=7, num2=9;
    //implicit type conversion
    cout<<"The sum of num and quot is: "<<quot+num<<endl;
    quot1 = num1/num2;
    cout<<"Without casting: quot1= "<<quot1<<endl;
    //wrong result displays 0

    //explicit type conversion using static_cast operator
    quot1=static_cast<float>(num1)/num2;
    cout<<"After casting: quot1= "<<quot1<<endl; //right answer
    return 0;
}