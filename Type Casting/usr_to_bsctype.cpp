#include<iostream>
using namespace std;

class celsius{
    private:
        float temper;
    public:
        celsius(){
            temper=0;
        }

        operator float(){
            float fer;
            fer = temper*9/5+32;
            return fer;
        }

        void getdata(){
            cout<<"Enter the temperature in celsius: "<<endl;
            cin>>temper;
        }
};

int main(){
    celsius c;
    float fer;
    c.getdata();
    fer = c;
    cout<<"Temperature in farenheit is: "<<fer<<endl;
}