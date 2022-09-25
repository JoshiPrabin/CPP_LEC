// We can use enumerated data type in c++ to enhance the readability of code.
// Using enums some integers can be provided a name which makes it easier for a programmer to enhance the code at a later time.

#include<iostream>
using namespace std;

int main(){
    enum app{facebook, instagram, twitter};
    cout<<facebook<<endl; // 0
    cout<<instagram<<endl; // 1
    cout<<twitter<<endl; // 2
    return 0;
}