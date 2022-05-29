//WAP in c++ to read the record of a student (name,address,roll) and display the record using structures in c++.

#include<iostream>
using namespace std;

struct student
{
    string name;
    string roll;
    string address;
};

int main(){
    student stu;
    cout<<"Enter the info of student: "<<endl;
    cout<<"\nName: ";
    cin>>stu.name;
    cout<<"\nRoll: ";
    cin>>stu.roll;
    cout<<"\nAddress: ";
    cin>>stu.address;
    cout<<"Displaying the info: "<<endl;
    cout<<"Name = "<<stu.name<<endl;
    cout<<"Roll = "<<stu.roll<<endl;
    cout<<"Address = "<<stu.address<<endl;

    return 0;
}
