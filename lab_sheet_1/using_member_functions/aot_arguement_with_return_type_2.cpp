// WAP to compute the area of a traingle using user defined function(arguements and return type)

#include<iostream>
#include<cmath>
using namespace std;

class area{
    public:
        float calculateArea(float s, float side1, float side2, float side3){
        float area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        return area;
}
};


int main(){
    area a1;
    float side1, side2, side3, s, area;
    cout<<"Enter the length of first side: "<<endl;
    cin>>side1;
    cout<<"Enter the length of second side: "<<endl;
    cin>>side2;
    cout<<"Enter the length of third side: "<<endl;
    cin>>side3;
    s = (side1+side2+side3)/2;
    cout<<"The area of the triangle is: "<<a1.calculateArea(s, side1, side2, side3)<<endl;
}