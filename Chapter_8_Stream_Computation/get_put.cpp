#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char c,str[25];
    cout<<"Enter a character: ";
    cin.get(c);
    cout<<"Enter a string: ";
    gets(str);
    cout<<"The entered character is: ";
    cout.put(c);
    cout<<"The entered string is: ";
    puts(str);
    return 0;
}