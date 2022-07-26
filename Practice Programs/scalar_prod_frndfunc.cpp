#include<iostream>
using namespace std;
class scalar{
    private:
        int i,j;
    public:
        void getdata(){
            cout<<"Enter length along x axis: "<<endl;
            cin>>i;
            cout<<"Enter length along y axis: "<<endl;
            cin>>j;
        }
        friend int operator *(scalar &,scalar &);
};

int operator *(scalar &s,scalar &s1){
            int n;
            n = (s1.i*s.i)+(s1.j*s.j);
            return n;
        }

int main(){
    scalar s1,s2;
    s1.getdata();
    s2.getdata();
    int n = s1*s2;
    cout<<"The scalar product of the given vectors is: "<<n<<endl;
    return 0;
}