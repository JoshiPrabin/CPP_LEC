#include<iostream>
using namespace std;
int main(){
    char data;
    cout<<"Member data";
    cin.get(data);
    while(data!='\n'){
        cout.put(data);
    }
    return 0;
}