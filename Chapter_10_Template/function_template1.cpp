#include<iostream>
using namespace std;
template<class T1, class T2>
void testfunc(T1 a, T2 b){
    cout<<a<<" "<<b<<endl;
}

int main(){
    int inum = 5;
    int fnum = 7.5;
    testfunc(inum, fnum); //equivalent to testfunc(int, float)
    testfunc(20,"Coding is fun"); //equivalent to testfunc(int, string)
    return 0;
}