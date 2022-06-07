// WAP to create a class Sample with 2 float data members and member functions void getdata() to input the values and one friend function float mean(Sample) to calculate and return mean value.

#include<iostream>
using namespace std;

class Mean{
    friend float mean(Mean);
    private:
        float num1,num2,calculatedmean;
    public:
        void getdata(){
            cout<<"Enter the value of num1: "<<endl;
            cin>>num1;
            cout<<"Enter the value of num2: "<<endl;
            cin>>num2;
        }
};

float mean(Mean m1){
    m1.calculatedmean = (m1.num1+m1.num2)/2;
    return m1.calculatedmean;
}

int main(){
    Mean m1;
    m1.getdata();
    float ans = mean(m1);
    cout<<"The mean is : "<<ans<<endl;
}