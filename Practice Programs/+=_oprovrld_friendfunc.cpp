#include<iostream>
using namespace std;
class incre{
    private:
        int a;
    public:
        incre(int x){
            x=a;
        }

        friend incre operator +=(incre &,int n);

        void display(){
            cout<<"a = "<<a<<endl;
        }
};

incre operator +=(incre &i,int n){
            i.a=i.a+n;
            return i;
        }

int main(){
    incre inc(0);
    incre i = (inc+=1);
    i.display();
    return 0;
}