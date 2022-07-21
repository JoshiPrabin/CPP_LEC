#include<iostream>
using namespace std;

int main(){
    int i,j;
    float f = 3.124f;
    char c='a';
    i = f;
    cout<<"Value of float is: "<<f<<endl;
    cout<<"Value of converted integer is: "<<i<<endl;

    i = static_cast<int>(f);
    j = static_cast<int>(c);
    cout<<"Value of integer is: "<<i<<endl;
    cout<<"Value of integer is: "<<j<<endl;
    return 0;
}