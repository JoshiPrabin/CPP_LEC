#include<iostream>
using namespace std;

int sum(int x, int y){
    return (x+y);
}

int main(){
    int x;
    x = sum(2,3);
    cout<<"The sum is: "<<x<<endl;
    return 0;
}