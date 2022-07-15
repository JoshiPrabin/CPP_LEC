#include<iostream>
using namespace std;
 class person{
    protected:
        string name;
        int marks;
        int roll;
    public:
        class MARKS{};
        class ROLL{};

        person(){
            cout<<"Enter name: "<<endl;
            cin>>name;
            cout<<"Enter marks: "<<endl;
            cin>>marks;
            cout<<"Enter roll: "<<endl;
            cin>>roll;
            if (roll<1)
            {
                throw ROLL();
            }
            else if (marks>100)
            {
                throw MARKS();
            }
            else{
                cout<<"Name: "<<name<<endl;
                cout<<"Marks: "<<marks<<endl;
                cout<<"Roll: "<<roll<<endl;
            }
            
        }
            
 };

 int main(){
    try{
        person();
    }
    catch(person::MARKS){
        cout<<"Exception: Marks entered more than full marks."<<endl;
    }
    catch(person::ROLL){
        cout<<"Exception: Roll cannot be negative"<<endl;
    }

 }