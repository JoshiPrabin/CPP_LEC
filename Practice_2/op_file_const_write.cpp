#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name,email;
    ofstream outfile("contact.doc");
    cout<<"\nEnter name: ";
    cin>>name;
    outfile<<name<<endl;
    cout<<"\nEnter email: ";
    cin>>email;
    outfile<<email<<endl;
    return 0;
}