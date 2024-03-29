//program to illustrate function overriding

#include<iostream>
using namespace std;

class base{
    protected:
        int num;
    public:
        void readata(){
            cout<<"Enter number in base: ";
            cin>>num;
        }
        void showdata(){
            cout<<"Number in base = "<<num<<endl;
        }
};

class derived: public base{
    private:
        int num;
    public:
        void readata(){
            cout<<"Enter number in derived: ";
            cin>>num;
        }
        void showdata(){
            cout<<"Number in derived class = "<<num<<endl;
        }
};

int main(){
    derived d1;
    d1.readata();
    d1.showdata();
    system("pause");
    return 0;
}