#include <iostream>

using namespace std;

double sum(int a, float b, double c){
    return a+b+c;
}

float sum(int x, double y){
    return x+y;
}

int sum(int z){
    return z;
}

int main(){
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2.2)<<endl;
    cout<<sum(5.5);
}