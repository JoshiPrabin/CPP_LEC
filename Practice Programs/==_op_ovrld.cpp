#include<iostream>
using namespace std;
class String{
    private:
        string s1;
    public:
        void getdata(){
            cout<<"Enter string: "<<endl;
            cin>>s1;
        }

        int operator ==(String s1){
            String str;
            if (str.s1==s1.s1)
            {
                return 1;
            }else{
                return 0;
            }
        }
        
};
int main(){
    String s,str;
    s.getdata();
    str.getdata();
    int n = s==str;
    if (n=1)
    {
        cout<<"Same."<<endl;
    }
    else{
        cout<<"Not same."<<endl;
    }
    
    return 0;
}