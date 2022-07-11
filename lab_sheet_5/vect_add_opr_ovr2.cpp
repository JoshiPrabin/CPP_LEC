#include <iostream>
using namespace std;
class vector
{
private:
    int x, y, z;

public:
    vector()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    vector(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void showdata()
    {
        cout << x << "i + " << y << "j + " << z << "k" << endl;
    }
    vector operator+(vector v)
    {
        v.x = x + v.x;
        v.y = y + v.y;
        v.z = z + v.z;
        return v;
    }
};

int main()
{
    vector v1(1, 2, 3);
    vector v2(2, 3, 4);
    cout << "First vector: " << endl;
    v1.showdata();
    cout << "Second vector: " << endl;
    v2.showdata();
    vector v3 = v1 + v2;
    cout << "\nSum : " << endl;
    v3.showdata();
}