#include<iostream>
using namespace std;

class One{
    public:
        One(){
            cout<<"Constructor"<<endl;
        }
        ~One(){
            cout<<"Destructor"<<endl;
        }
};
int main(){
    One();
}