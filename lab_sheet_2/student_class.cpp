// making a class and using it to input and display info of students

#include<iostream>
using namespace std;

class student{
    private:
        string name,roll,address;
        float percent;
    public:
        void input(){
            cout<<"\nEnter the name of student: ";
            cin>>name;
            cout<<"\nEnter the roll no of student: ";
            cin>>roll;
            cout<<"\nEnter the address of student: ";
            cin>>address;
            cout<<"\nEnter the percentage of student: ";
            cin>>percent;
        }

        void display(){
            cout<<"Name = "<<name<<endl;
            cout<<"Roll = "<<roll<<endl;
            cout<<"Address = "<<address<<endl;
            if (percent>45){
                cout<<"Result = Pass"<<endl;
            }
            else{
                 cout<<"Result = Fail"<<endl;
            }
        }
};

int main(){
    student s1;
    s1.input();
    s1.display();
}