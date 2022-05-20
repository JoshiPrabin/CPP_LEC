#include <iostream>
using namespace std;
void normal(int a)
{
    a = 10;
    cout << a << endl;
}

void reference(int &d)
{
    d = 20;
    cout << d << endl;
}

int main()
{
    int a = 15;
    int d = 2;

    normal(a);
    reference(d);

    cout << a << endl;
    cout << d << endl;
    return 0;
}