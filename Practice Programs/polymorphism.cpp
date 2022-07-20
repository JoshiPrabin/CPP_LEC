// function overloading and operator overloading in one program

#include<iostream>
using namespace std;

class polymorph{
    private:
        int num1,num2;
    public:
        polymorph(int a,int b){
            num1=a;
            num2=b;
        }
        polymorph operator +(polymorph pol){
            polymorph p1(num1,num2);
            p1.num1=num1+pol.num1;
            p1.num2=num2+pol.num2;
            return p1;
        }
        void display(){
            cout<<"num1 is: "<<num1<<endl;
            cout<<"num2 is: "<<num2<<endl;
        }
        void display(int x, int y){
            cout<<"First number entered is: "<<x<<endl;
            cout<<"Second number entered is: "<<y<<endl;
        }
};
int main(){
    polymorph p1(2,2);
    polymorph p2(3,3);

    polymorph p = p1+p2;

    p.display();
    p.display(2,3);

    return 0;
}