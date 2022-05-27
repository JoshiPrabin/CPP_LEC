#include<iostream>
using namespace std;

class Wall{
    private:
        double length;
        double height;
    
    public:
        Wall(double len, double hgt){
            //initialize private variables 
            length = len;
            height = hgt;
        }

        double calculateArea(){
            return (length*height);
        }
};

int main(){
    Wall w1(5,4);
    cout<<"The area of the wall is : "<<w1.calculateArea()<<endl;
}