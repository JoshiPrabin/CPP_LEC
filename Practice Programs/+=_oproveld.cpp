#include<iostream>
using namespace std;
class incre{
    private:
        int a;
    public:
        incre(int x){
            x=a;
        }

        int operator +=(int n){
            a=a+n;
            return a;
        }
};

int main(){
    incre inc(0);
    cout<< (inc += 1)<<"\t";
    return 0;
    
}