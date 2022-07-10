// an example of multipath inheritance

#include<iostream>
using namespace std;

class student{
    protected:
        int roll;
        char name[25];
    public:
        void getstdata(){
            cout<<"\n Enter roll: ";
            cin>>roll;
            cout<<"\n Enter Name: ";
            cin>>name;
        }
        void showstdata(){
            cout<<"\n Student ID: "<<roll;
            cout<<"\n Name: "<<name;
        }
};

class test: virtual public student{
    protected:
        int math,eng;
    public:
        void getdata(){
            cout<<"\n Enter internal marks in math and english: ";
            cin>>math>>eng;
        }
        void showdata(){
            cout<<"\n Internal marks in math: "<<math;
            cout<<"\n Internal marks in english: "<<eng;
        }
        int total1(){
            return (math+eng);
        }
};

class sport: virtual public student{
    protected:
        int score;
    public:
        void getdata(){
            cout<<"\n Enter score: ";
            cin>>score;
        }
        void showdata(){
            cout<<"\n Score: "<<score;
        }
        int total2(){
            return (score);
        }
};

class result: public test,public sport{
    public:
        void getdata(){
            test::getdata();
            sport::getdata();
        }
        void showdata(){
            test::showdata();
            sport::showdata();
        }
        int TotalMarks(){
            return (total1()+total2());
        }
};

int main(){
    result r;
    cout<<"\n Enter data for student: "<<endl;
    r.getstdata();
    cout<<"\n Enter marks: "<<endl;
    r.getdata();
    cout<<"\n Data for the student is : "<<endl;
    r.showdata();
    cout<<"\n Total Score: "<<r.TotalMarks();
    return 0;
}