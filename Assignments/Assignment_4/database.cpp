#include<iostream>
using namespace std;

class staff{
    protected:
        int code;
        string name;
    public:
        void getdata(){
            cout<<"\nenter name: "<<endl;
            cin>>name;
            cout<<"enter code: "<<endl;
            cin>>code;
        }

        void display(){
            cout<<"\nname = "<<name<<endl;
            cout<<"code = "<<code<<endl;
        }

};

class teacher: public staff{
    protected:
        string subject,publication;
    public:
        void getdata(){
            staff::getdata();
            cout<<"\nenter subject: "<<endl;
            cin>>subject;
            cout<<"enter publication: "<<endl;
            cin>>publication;
        }

        void display(){
            staff::display();
            cout<<"\nsubject = "<<subject<<endl;
            cout<<"publication = "<<publication<<endl;
        }
};

class officer: public staff{
    protected:
        char grade;
    public:
        void getdata(){
            staff::getdata();
            cout<<"\nenter grade: "<<endl;
            cin>>grade;
        }

        void display(){
            staff::display();
            cout<<"\ngrade: "<<grade<<endl;
        }
};

class typist: public staff{
    protected:
        string speed;
    public:
        void getdata(){
            staff::getdata();
            cout<<"\nenter speed: "<<endl;
            cin>>speed;
        }

        void display(){
            staff::display();
            cout<<"\nspeed: "<<speed<<endl;
        }
}; 

class regular: public typist{
    protected:
        char say;
    public:
        void getdata(){
        staff::getdata();
        cout<<"\nregular? y/n :"<<endl;
        cin>>say;
        }

        void display(){
            staff::display();
            typist::display();
            cout<<"\nregular: "<<say<<endl;
        }
};

class casual: public typist{
    protected:
        char say;
        int wages;
    public:
        void getdata(){
            staff::getdata();
            cout<<"\ndo you type daily? "<<endl;
            cin>>say;
            cout<<"wages: "<<endl;
            cin>>wages;
        }

        void display(){
            staff::display();
            typist::display();
            cout<<"\ndaily typer?y/n "<<say<<endl;
            cout<<"wages: "<<wages<<endl;
        }
};

int main(){
    staff s;
    teacher t;
    officer o;
    typist typ;
    regular r;
    casual cas;
    
    cout<<"\nfor teacher:"<<endl;
    t.getdata();
    cout<<"\nfor officer:"<<endl;
    o.getdata();
    cout<<"\nfor typist"<<endl;
    typ.getdata();
    char say;
    cout<<"regular(r) or casual(c): "<<endl;
    cin>>say;
    if (say=='r')
    {
        r.getdata();
    }
    else if (say=='c')
    {
        cas.getdata();
    }

    char say2, say3;
    cout<<"\nview info on teacher(t), officer(o) or typist(s): "<<endl;
    cin>>say3;
    if (say3=='t')
    {
        t.display();
    }
    else if (say3=='o')
    {
        o.display();
    }
    else if (say3=='s')
    {
        cout<<"\nregular(r) or casual(c)"<<endl;
        cin>>say2;
        if (say2=='r')
        {
            r.display();
        }
        else if (say2=='c')
        {
            cas.display();
        }  
    }
    system("pause");
    
}