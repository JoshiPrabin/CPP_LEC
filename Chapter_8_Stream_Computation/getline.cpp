//example of function getline
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char line[100];
    cout<<"Enter line: "<<endl;
    cin.getline(line,11);
    cout.write(line,11);
    return 0;
}