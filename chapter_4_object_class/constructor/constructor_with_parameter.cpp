#include<iostream>
using namespace std;

class number{
    private:
        int a,b;
    public:
        number(int x,int y){
            a=x;
            b=y;
        }

        int calculateSUm(){
            return a+b;
        }
};

int main(){
    number one(4,4);
    cout<<"The sum is : "<<one.calculateSUm()<<endl;
}