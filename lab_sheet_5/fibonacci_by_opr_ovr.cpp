#include<iostream>
using namespace std;
class fibonacci{
    private:
        int num;
    public:
        fibonacci(int n){
            num = n;
        }
        void operator ++(){
            num = num+1;
        }
};
int main(){
    int n;
    cout<<"Enter the number of digits you want: ";
    cin>>n;
    fibonacci f(n);
    int a=0,b=1,sum=0;
    cout<<" "<<a<<" ";
    cout<<" "<<b<<" ";
    for(int i=2;i<n;++i){
        sum=a+b;
        cout<<" "<<sum<<" ";
        a=b;
        b=sum;
}
}