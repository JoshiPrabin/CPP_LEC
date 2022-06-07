//WAP in c++ to calculate simple interest from given principle time and rate. Set the rate to 15% as default argument when rate is not provided.

#include<iostream>
using namespace std;

class simpleInterest{
    private:
        float principle,rate,time;
    public:
        
        void calculateInterest(float principle, float time, float rate=15){
            float interest = (principle*rate*time)/100;
            cout<<"The simple interest is: "<<interest<<endl;
        }
};

int main(){
    simpleInterest case1;
    case1.calculateInterest(1000,1,10);
    case1.calculateInterest(1000,1);
}