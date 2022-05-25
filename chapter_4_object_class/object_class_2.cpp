// WAP to calculate area and volume of a room(getter)

#include<iostream>
using namespace std;
class room
{
private:
    double length, breadth, height;
    
public:
    double setValue(double len, double bdh, double hgt){
        length = len;
        breadth = bdh;
        height = hgt;
    }

    double calculateArea(){
        return(length*breadth);
    }

    double calculateVolume(){
        return(length*breadth*height);
    }
};

int main(){
    room room1;
    double length,breadth,height;
    room1.setValue(4.0,4.0,1.0);

    cout<<"Area of the room is : "<<room1.calculateArea()<<endl;
    cout<<"Volume of the room is : "<<room1.calculateVolume()<<endl;
}
