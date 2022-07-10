#include<iostream>
using namespace std;
class person{
    protected:
        string name;
        int code;
    public:
        void getdataper(){
            cout<<"\nEnter name: ";
            cin>>name;
            cout<<"\nEnter code: ";
            cin>>code;
        }
        void showdataper(){
            cout<<"\nName: "<<name<<endl;
            cout<<"Code: "<<code<<endl;
        }
};
class account: virtual public person{
    protected:
        int pay;
    public:
        void getdata(){
        cout<<"\nEnter your pay: ";
        cin>>pay;
        }
        void showdata(){
            cout<<"\npay: "<<pay<<endl;
        }
};
class admin: virtual public person{
    protected:
        int exp;
    public:
        void getdata(){
        cout<<"\nEnter your experience: ";
        cin>>exp;
        }
        void showdata(){
            cout<<"\nExperience: "<<exp<<endl;
        }
};
class master: public account, public admin{
    public:
        void getdata(){
            account::getdata();
            admin::getdata();
        }
        void showdata(){
            account::showdata();
            admin::showdata();
        }
};
int main(){
    master m;
    m.getdataper();
    m.getdata();
    m.showdataper();
    m.showdata();
    char say,say1;
    do
    {
    cout<<"\nDo you want to update data?(y/n): ";
    cin>>say;
    if (say=='y')
    {
    m.getdataper();
    m.getdata();
    }
    cout<<"\nDo you want to view updated data?(y/n): ";
    cin>>say1;
    if (say1=='y')
    {
    m.showdataper();
    m.showdata();
    }
    } while (say=='y');
    
}