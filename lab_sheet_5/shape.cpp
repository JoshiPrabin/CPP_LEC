//Create a base class called shape. Use this class to store two double type values that could be
// used to compute the area of figures. Derive two specific classes called triangle and rectangle
// from the base shape. Add to the base class, a member function get_data() to initialize base class
// data members and another member function display_area() to compute and display the area of
// figures. Make display_area() as virtual function and redefine this function in the derived class to
// suit their requirements.

#include<iostream>
using namespace std;
class shape{
    protected:
        double base,height;
    public:
        void get_data(){
            base=0;
            height=0;
        }
        virtual void display_area(){
            cout<<"Area: "<<endl;
        }
};
class triangle: public shape{
    public:
    triangle(double a, double b){
        base = a;
        height = b;
    }
        void display_area(){
            double area = (0.5)*base*height;
            cout<<"Area of triangle is: "<<area<<endl;
        }
};
class rectangle: public shape{
    public:
    rectangle(int a, int b){
        base = a;
        height = b;
    }
        void display_area(){
            double area = base*height;
            cout<<"Area of rectangle is: "<<area<<endl;
        }
};
int main(){
    triangle t(2,4);
    t.display_area();
    rectangle r(2,4);
    r.display_area();
}