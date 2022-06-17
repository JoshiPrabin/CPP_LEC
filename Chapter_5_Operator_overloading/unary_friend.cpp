#include <iostream>
using namespace std;

class unaryFriend
{
private:
    int a, b, c;

public:
    unaryFriend()
    {
        a = 10;
        b = 20;
        c = 30;
    }

    void display()
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
        cout << "c= " << c << endl;
    }

    void friend operator-(unaryFriend &);
};

void operator-(unaryFriend &u)
{
    u.a = -u.a;
    u.b = -u.b;
    u.c = -u.c;
}

int main()
{
    unaryFriend u1, u2;
    cout << "Before Overloading: " << endl;
    u1.display();
    -u1;
    cout << "After Overloading: " << endl;
    u1.display();
    // u2 = -u1; //error: no operator "=" matches these operands
}