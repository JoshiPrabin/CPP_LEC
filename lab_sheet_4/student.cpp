#include<iostream>
using namespace std;
class Student{
    protected:
        string name,roll;
    public:
        virtual void getdata(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"\nEnter roll: ";
            cin>>roll;
        }
        virtual void showdata(){
            cout<<"\nName: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
        }
};
class test: public Student{
    protected:
        int math, eng;
    public:
        void getdata(){
            cout<<"Enter marks in math: ";
            cin>>math;
            cout<<"\nEnter marks in english: ";
            cin>>eng;
        }
        void showdata(){
            cout<<"Marks in math: "<<math<<endl;
            cout<<"Marks in english: "<<eng<<endl;
        }
};
class sport: public Student{
    protected:
        int score;
    public:
        void getdata(){
            cout<<"Enter score: ";
            cin>>score;
        }
        void showdata(){
            cout<<"Total score: "<<score<<endl;
        }
};
class result: public sport,public test{
    private:
        int total;
    public:
        int sum(){
            total = eng+math+score;
            return total;
        }
};
int main(){
    Student st;
    test t;
    sport s;
    result r;
    st.getdata();
    t.getdata();
    s.getdata();
    st.showdata();
    cout<<"Total score is: "<<r.sum();
    return 0;
}
