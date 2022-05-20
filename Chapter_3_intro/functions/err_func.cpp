#include<iostream>
using namespace std;
void display(int a, double b){
    cout<<"Sum is "<<(a+b);
}

void display(double d){
 cout<<"The value is "<<d;
}

int main() {
    display(3.3);
    return 0;
}