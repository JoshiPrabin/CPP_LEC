//WAP in c++ to read the record of a student (name,address,roll) and display the record using structures in c++.

#include<iostream>
using namespace std;

class studentInfo{
    private:
        struct student
            {
                string name;
                string roll;
                string address;
            }stu;

    public:
        void input(){
            cout<<"Enter the info of student: "<<endl;
            cout<<"\nName: ";
            cin>>stu.name;
            cout<<"\nRoll: ";
            cin>>stu.roll;
            cout<<"\nAddress: ";
            cin>>stu.address;
        }

        void display(){
            cout<<"Displaying the info: "<<endl;
            cout<<"Name = "<<stu.name<<endl;
            cout<<"Roll = "<<stu.roll<<endl;
            cout<<"Address = "<<stu.address<<endl;

        }
};

int main(){
    studentInfo s1;
    s1.input();
    s1.display();
    return 0;
}
