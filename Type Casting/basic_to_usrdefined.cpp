#include<iostream>
using namespace std;

class celsius{
    private:
        int temper;
    public:
        celsius(){
            temper=0;
        }

        //conversion constructor
        celsius(float ftmp){
            temper = (ftmp-32)*5/9;
        }

        void showtemper(){
            cout<<"The temperature is: "<<temper<<endl;
        }
};

int main(){
    celsius c;
    float f;
    cout<<"Enter temperature in farenheit: "<<endl;
    cin>>f;
    c=f;
    c.showtemper();
}