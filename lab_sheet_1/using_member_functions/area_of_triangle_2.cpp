// WAP to compute the area of a traingle

#include<iostream>
#include<cmath>
using namespace std;

class area {
    private:
        float side1, side2, side3, s, area;
    public:
        void input(){
            cout<<"Enter the length of first side: "<<endl;
            cin>>side1;
            cout<<"Enter the length of second side: "<<endl;
            cin>>side2;
            cout<<"Enter the length of third side: "<<endl;
            cin>>side3;
        }
        void calcArea(){
            s = (side1+side2+side3)/2;
            area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
            cout<<"The area of the triangle is: "<<area<<endl;
        }

};
int main(){
    area a1;
    a1.input();
    a1.calcArea();
}