#include<iostream>
using namespace std;
class media{
    protected:
        string title;
        float price;
    public:
        void getdata(){
            cout<<"\nTitle = ";
            cin>>title;
            cout<<"\nPrice = ";
            cin>>price;
        }
        void showdata(){
            cout<<"Title: "<<title<<endl;
            cout<<"Price: "<<price<<endl;
        }
};
class book: public media{
    private:
        int no;
    public:
        void getdata(){
            cout<<"For book:"<<endl;
            media::getdata();
            cout<<"\nNo of pages in the book? = ";
            cin>>no;
        }
        void showdata(){
            media::showdata();
            cout<<"The number of pages in the book is "<<no<<endl;
        }
};
class tape: public media{
    private:
        int tp;
    public:
        void getdata(){
            cout<<"For tape:"<<endl;
            media::getdata();
            cout<<"\nPlaying time of tape? = ";
            cin>>tp;
        }
        void showdata(){
            media::showdata();
            cout<<"The playing time of the tape is "<<tp<<endl;
        }
};
int main(){
    book b1;
    b1.getdata();
    b1.showdata();
    tape t1;
    t1.getdata();
    t1.showdata();
    return 0;
}