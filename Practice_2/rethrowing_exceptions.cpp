#include<iostream>
#include<cmath>
using namespace std;
class Number{
    private:
        double data;
    public:
        Number(){
            data=0;
        }
        Number(double d){
            data=d;
        }
        class NEG{};
        void readdata(){
            cout<<"\nEnter number: ";
            cin>>data;
        }
        double sqroot(){
            if (data<0)
            {
                throw NEG{};
            }
            else{
                return (sqrt(data));
            }
            
        }
        double gmean(Number nm){
            double res;
            Number an(data*nm.data);
            try
            {
                res = an.sqroot();
            }
            catch(NEG){
                cout<<"Negative number entered."<<endl;
                throw;
            }
            return res;
            
        }
};
int main(){
    Number nm1,nm2(53.5);
    nm1.readdata();
    try
    {
        double gm=nm1.gmean(nm2);
        cout<<"The geometric mean is: "<<gm<<endl;
    }
    catch(Number::NEG)
    {
        cout<<"The geometric mean of negative number cannot be found."<<endl;
    }
    return 0;
    
}