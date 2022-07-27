#include<iostream>
using namespace std;
template <class T>
T swap_value(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
  
int main()
{
    int a = 10, b = 20;
    swap_value(a, b);
    cout << a << " " << b << endl;
    char c1 = 'a', c2 = 'b';
    swap_value(c1, c2);
    cout << c1 << " " << c2 << endl;
    return 0;
}