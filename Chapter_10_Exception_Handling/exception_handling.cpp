#include<iostream>
using namespace std;

int main(){
    int a,b,x;
    cout<<"Enter the values of a and b: "<<endl;
    cin>>a>>b;
    x = a/(a-b); //Exception has occured.
    cout<<"The value of x is : "<<x<<endl;
    return 0;
}