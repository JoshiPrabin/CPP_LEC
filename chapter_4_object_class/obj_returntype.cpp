//using object as a return type

#include<iostream>
using namespace std;

class Student{
    public:
        double marks1,marks2;
};

Student createStudent(){
    Student student;
    student.marks1 = 100;
    student.marks2 = 90;
    cout<<"student.marks1 = "<<student.marks1<<endl;
    cout<<"student.marks2 = "<<student.marks2<<endl;
    return student;
}

int main(){
    Student student1;
    student1 = createStudent();
    return  0;
}