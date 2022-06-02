//passing object as parameter

#include<iostream>
using namespace std;

class Student{
    public:
        float marks;

        Student(float m){
            marks = m;
        }
};

void calcAverage(Student s1, Student s2){
    float average = (s1.marks + s2.marks)/2;
    cout<<"the average is : "<<average<<endl;
}

int main(){
    Student s1(100.0),s2(50.0);
    calcAverage(s1,s2);
}