#include<iostream>
using namespace std;

class Wall
{
private:
    double length;
    double height;
public:
    Wall(double len, double hgt){
        //initialize private variables 
            length = len;
            height = hgt;
    }

    // copy constructor with a wall object as parameter 
    // syntax to create copy constructor - classname(classname &objectname)
    Wall(Wall &obj){
        // initialize private variables 
        length = obj.length;
        height = obj.height;
    }
    double calculateArea(){
        return length*height;
    }
    
};

int main(){
    Wall w1(3.5,1.0);
    Wall w2(w1); //w2 is a copy of w1
    cout<<w1.calculateArea()<<endl;
    cout<<w2.calculateArea()<<endl;

}
