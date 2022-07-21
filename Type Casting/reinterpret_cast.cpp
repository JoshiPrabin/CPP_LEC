#include<iostream>
using namespace std;

int main(){
    int i = 100;
    cout<<"Value of address of i is: "<<&i<<endl;
    int *p;

    // p = reinterpret_cast<int *>(i);
    // cout<<"Value of p is: "<<p<<endl;

    int ivar;
    double dvar;
    int *pivar;
    double *pdvar;
    void *pvoid;

    pivar = reinterpret_cast<int *>(&dvar);
    pivar = reinterpret_cast<int *>(&ivar);

    cout<<"pivar= "<<pivar<<endl;
    cout<<"pivar= "<<&pivar<<endl;
    cout<<"pivar= "<<pdvar<<endl;
}