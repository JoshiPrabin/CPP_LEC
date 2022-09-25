#include<iostream>
using namespace std;

class Two{
    private:
        int m,n;
    public:
        void setdata(int x, int y){
            m = x;
            n = y;
        }
        int getm(){
            return m;
        }
        int getn(){
            return n;
        }
};

class One{
    private:
        int a,b;
    public:
        void showdata(){
            cout<<a<<','<<b<<endl;
        }
        One(Two t){
            a = t.getm();
            b = t.getn();
        }
        One(){}
};

int main(){
    One o;
    Two t;
    t.setdata(2,3);
    o = t;
    o.showdata();
    return 0;
}