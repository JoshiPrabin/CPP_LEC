#include<iostream>
using namespace std;
int main(){
    int *arr, n;
    cout<<"\nEnter the value of n: ";
    cin>>n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter "<<i<<"th digit ";
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    delete arr;
}