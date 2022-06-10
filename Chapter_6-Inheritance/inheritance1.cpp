#include<iostream>
using namespace std;

class Account{
    public:
        int salary=100000;
};

class programmer: public Account{
    public:
        int bonus = 5000;
};

int main(){
    programmer p1;
    //object of derived class can access the data member of the parent class
    cout<<"Salary is: "<<p1.salary<<endl;
    cout<<"Bonus is: "<<p1.bonus<<endl;
}