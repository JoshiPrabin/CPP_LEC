#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream in("abc.txt");
    string st;
    in>>st;
    cout<<st<<endl;
    in.close();
}