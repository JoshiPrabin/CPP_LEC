#include<iostream>
using namespace std;

class sumDiff{
    private:
        int num1, num2;
    public:
        sumDiff(){
            num1 = 0;
            num2 = 0;
        }
        sumDiff(int a, int b){
            num1 = a;
            num2 = b;
        }

        void operator +(){
            num1 = 1 + num1;
            num2 = 1 + num2;
        }

        sumDiff operator -(sumDiff s){
            sumDiff s1;
            s1.num1 = num1 - s.num1;
            s1.num2 = num2 - s.num2;
            return s1;

        }

        void display(){
            cout<<"\nnum1 is: "<<num1<<endl;
            cout<<"num2 is: "<<num2<<endl;
        }
};

int main(){
    sumDiff s1(4,6);
    +s1;
    s1.display();

    sumDiff s2(2,3);
    sumDiff s = s1-s2;
    s.display();
    return 0;
}