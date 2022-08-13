#include<iostream>
#include<math.h>
using namespace std;
class rect{
    public:
        float x=0,y=0;
        rect(){
            cout<<" enter x: "<<endl;
            cin>>x;
            cout<<" enter y: "<<endl;
            cin>>y;
        }
};
class polar{
    public:
        float radius,angle;
        polar(){}
        polar(rect r){
            radius = sqrt(r.x*r.x+r.y*r.y);
            angle = atan(r.y/r.x);
        }
        void display(){
            cout<<"radius: "<<radius<<endl;
            cout<<"angle: "<<angle<<endl;
        }
};
int main(){
    polar p;
    rect r;
    p=r;
    p.display();
}