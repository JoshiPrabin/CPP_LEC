#include<iostream>
using namespace std;
const int MAX = 10;

class Array{
    private:
        int i;
        int arr[MAX];
    public:
        class LOWRANGE{};
        class HIGHRANGE{};
        Array(){
            cout<<"Enter index of the array: "<<endl;
            cin>>i;
            if (i<0)
            {
                throw LOWRANGE();
            }
            else if (i>10)
            {
                throw HIGHRANGE();
            } 
        }
};
int main(){
    try{
        Array();
    }
    catch(...){
        cout<<"Exception: array out of bound."<<endl;
    }
}