#include<iostream>
using namespace std;
template <class T>
class scalar{
    private:
        T i,j;
    public:
        scalar(){}
        scalar(T a,T b){
            i=a;
            j=b;
        }
        T operator *(scalar b){
            T c;
            c = (i*b.i) + (j*b.j);
            return c;
        }
};

int main(){
    scalar<int> s1(2,3);
    scalar<int> s2(2,3);    
    cout<<"The scalar product is: "<<(s1*s2)<<endl;
    return 0;
}