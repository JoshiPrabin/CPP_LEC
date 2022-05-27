#include<iostream>
using namespace std;

class Account{
    private:
        int accno;
        float balance;
    public:
        Account(){
            accno = 1024, balance = 5000.55;
        }
        Account(int acc){
            accno = acc;
            balance = 0.0;
        }
        Account(int acc, float bal){
            accno=acc;
            balance=bal;
        }
        void display(){
            cout<<"\nAccount no. = "<<accno<<endl;
            cout<<"\nBalance = "<<balance<<endl;
        }
}; //end of class definition

int main(){
    Account acc1;
    Account acc2(100);
    Account acc3(200, 8000.50);
    cout<<endl<<"Account Information"<<endl;
    acc1.display();
    acc2.display();
    acc3.display();
}