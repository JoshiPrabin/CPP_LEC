#include<iostream>
#include<cstring>
using namespace std;
class concat{
    private:
        string s1;
    public:
        concat(){}
        void getdata(){
            cout<<"Enter string: ";
            cin>>s1;
            cout<<"\n";
        }

        void operator +(concat c1){
            concat c2;
            cout<<"The concatenated string is: ";
            cout<<(s1+c1.s1);
        }
};

int main(){
    concat c1;
    concat c2;
    c1.getdata();
    c2.getdata();
    c1+c2;
}