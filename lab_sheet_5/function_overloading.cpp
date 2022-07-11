#include<iostream>
#include<math.h>
using namespace std;
class Area{
    public:
        void calcArea(float length){
            cout<<"The area of square is: "<<length*length<<endl;
        }
        void calcArea(float length, float breadth){
            cout<<"The area of square is: "<<length*breadth<<endl;
        }
        void calcArea(float a, float b, float c){
            float s,area;
            s=(a+b+c)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"The area of square is: "<<area<<endl;
        }
};
int main(){
    Area a;
    a.calcArea(1,2,3);
    a.calcArea(1,2);
    a.calcArea(2);
}