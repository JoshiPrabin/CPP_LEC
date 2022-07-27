#include<iostream>
using namespace std;
template <class T>
void swap_value(T& a, T& b){
    cout<<"Before swapping= "<<a<<" "<<b<<endl;
    cout<<"After swapping= "<<b<<" "<<a<<endl;
}

int main(){
    int a=2,b=3;
    swap_value(a,b);
    char c1='a',c2='b';
    swap_value(c1,c2);
}