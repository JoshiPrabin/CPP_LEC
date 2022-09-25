#include<iostream>
using namespace std;

class sum{
    public:
        int x,y;
        int add(int x, int y){
            return (x+y);
        }
};

int main(){
    sum s1;
    int a,b,c;
    a=s1.add(2,3);
    b=s1.add(1,2);
    c=s1.add(1,1);
    cout<<"The sum is (a)"<<a<<endl;
    cout<<"The sum is (b)"<<b<<endl;
    cout<<"The sum is (c)"<<c<<endl;
    return 0;
}