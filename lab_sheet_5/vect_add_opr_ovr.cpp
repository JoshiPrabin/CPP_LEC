#include<iostream>
using namespace std;
class vector{
    private:
        int x,y,z;
    public:
        vector(){
            x=0;
            y=0;
            z=0;
        }
        vector(int a,int b,int c){
            x=a;
            y=b;
            z=c;
        }
        void showdata(){
            cout<<x<<"i + "<<y<<"j + "<<z<<"k"<<endl;
        }
        vector friend operator +(vector &v, vector);
};
vector operator +(vector &v, vector v1){
    v1.x = v1.x + v.x;
    v1.y = v1.y +v.y;
    v1.z = v1.z +v.z;
    return v1;
}
int main(){
    vector v1(1,2,3);
    vector v2(2,3,4);
    cout<<"First vector: "<<endl;
    v1.showdata();
    cout<<"Second vector: "<<endl;
    v2.showdata();
    vector v3 = v1 + v2;
    cout<<"\nSum : "<<endl;
    v3.showdata();
}