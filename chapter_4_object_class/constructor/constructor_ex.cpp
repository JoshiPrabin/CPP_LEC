#include<iostream>
using namespace std;

class counter
{
private:
    int count;
public:
    counter(){count=2;}
    // counter initialize value of count to 0
    // it has same name as class name
    void inc_count(){count++;}
    int ret_count(){return count;}
};

int main(){
    counter c1,c2;   //counter is initialized to 0 automatically
    cout<<"\n c1 = "<<c1.ret_count();
    cout<<"\n c2 = "<<c2.ret_count();
    c1.inc_count();
    c2.inc_count();
    c2.inc_count();
    cout<<"\n c1 = "<<c1.ret_count();
    cout<<"\n c2 = "<<c2.ret_count();
}

