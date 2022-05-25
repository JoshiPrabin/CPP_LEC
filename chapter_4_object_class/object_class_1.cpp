// WAP to calculate area and volume of a room

#include<iostream>
using namespace std;
class room
{
private:
    
public:
    double length, breadth, height;

    double calculateArea(double length, double breadth){
        return(length*breadth);
    }

    double calculateVolume(double length, double breadth, double height){
        return(length*breadth*height);
    }
};

int main(){
    double length,breadth,height;
    room room1;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the breadth: ";
    cin>>breadth;
    cout<<"Enter the height: ";
    cin>>height;

    cout<<"Area of the room is : "<<room1.calculateArea(length,breadth)<<endl;
    cout<<"Volume of the room is : "<<room1.calculateVolume(length,breadth,height)<<endl;
}
