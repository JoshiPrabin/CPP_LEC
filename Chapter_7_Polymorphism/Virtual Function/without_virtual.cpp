// when a function is made virtual, it allows a program to decide at run time which function to call based on the TYPE OF THE OBJECT POINTED BY THE POINTER rather than TYPE OF THE POINTER ITSELF

#include<iostream>
using namespace std;

class shape{
    protected:
        int width,height;
    public:
        shape(int a=0, int b=0){
            width = a;
            height = b;
        }

        void area(){
            cout<<"Area of the shape: "<<endl;
        }
};

class rectangle: public shape{
    public:
        rectangle(int a, int b){
            width = a;
            height =b;
        }

        void area(){
            cout<<"The area of rectangle is: "<<(width*height)<<endl;
        }
};

class triangle: public shape{
    public:
        triangle(int a, int b){
            width = a;
            height =b;
        }

        void area(){
            cout<<"The area of triangle is: "<<(width*height/2)<<endl;
        }
};

int main(){
    shape *shap;
    shape sh(1,2);
    shap = &sh;
    shap -> area(); //calls area() of base class
    rectangle rec(10,20);
    shap = &rec;
    shap ->area(); //calls area() of base class
    triangle tri(10,20);
    shap = &tri;
    shap ->area(); //calls area() of base class
    return 0;
}