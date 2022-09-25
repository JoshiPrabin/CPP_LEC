#include<iostream>
using namespace std;

class Distance{
    private:
        float m;
    public: 
        void getdata(float x){
            m=x;
        }
        int friend operator>(Distance &,Distance &);
        void friend operator==(Distance &,Distance &);
};

int operator>(Distance &d1, Distance &d2){
    if (d1.m>d2.m)
    {
        return 1;
    }
    else{
        return 0;
    }  
}

void operator==(Distance &d1,Distance &d2){
    if (d1.m==d2.m)
    {
        cout<<"d1 = d2"<<endl;
    }
    else{
        cout<<"d1 != d2"<<endl;
    }
    
}
int main(){
    Distance d1,d2;
    d1.getdata(10);
    d2.getdata(20);
    int x = d1>d2;
    if (x==1)
    {
        cout<<"d1 is greater"<<endl;
    }
    else{
        cout<<"d2 is greater"<<endl;
    }

    d1==d2;
    
}