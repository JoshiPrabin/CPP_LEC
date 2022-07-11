#include<iostream>
using namespace std;
class Reservation{
    protected:
        string rid,rdate;
    public:
        void input(){
            cout<<"Enter id: ";
            cin>>rid;
            cout<<"\nEnter date: ";
            cin>>rdate;
        }
        void display(){
            cout<<"Id: "<<rid<<endl;
            cout<<"Date: "<<rdate<<endl;
        }
};
class Person: public Reservation{
    private:
        string name;
        int age;
    public:
        void getdata(){
            cout<<"Enter yur name: ";
            cin>>name;
            cout<<"\nEnter you age: ";
            cin>>age;
        }
        void showdata(){
            cout<<"\nName: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
int main(){
    Reservation r;
    Person p;
    r.input();
    p.getdata();
    cout<<"Ticket booked for: "<<endl;
    p.showdata();
}