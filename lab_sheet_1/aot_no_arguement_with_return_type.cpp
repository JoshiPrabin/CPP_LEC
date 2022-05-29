// WAP to compute the area of a traingle using user defined function(no arguements with return type)

#include <iostream>
#include <cmath>
using namespace std;

float calculateArea()
{
    float side1, side2, side3, s, area;
    cout << "Enter the length of first side: " << endl;
    cin >> side1;
    cout << "Enter the length of second side: " << endl;
    cin >> side2;
    cout << "Enter the length of third side: " << endl;
    cin >> side3;
    s = (side1 + side2 + side3) / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return area;
}

int main()
{
    float area = calculateArea();
    cout << "The area of the triangle is: "  << area << endl;
}