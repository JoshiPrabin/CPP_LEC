#include<iostream>
using namespace std;
class Complex{
    private:
        int real,imag;
    public:
        void getdata(){
            cout<<"Enter real part: "<<endl;
            cin>>real;
            cout<<"Enter imaginary part: "<<endl;
            cin>>imag;
        }

        int operator >(Complex s1){
            Complex cmp;
            if (cmp.real > s1.real)
            {
                return 1;
            }else{
                return 0;
            }
        }
        
};
int main(){
    Complex s,str;
    s.getdata();
    str.getdata();
    int n = s > str;
    if (n=1)
    {
        cout<<"The first complex number is greater."<<endl;
    }
    else{
        cout<<"The second complex number is greater."<<endl;
    }
    
    return 0;
}