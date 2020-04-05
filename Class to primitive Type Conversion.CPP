#include<iostream>

using namespace std;

class Complex
{
    int a, b;
public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a = " << a << endl << "b = " << b << endl;
    }
    operator int() // same data type as int
    {
        return a;
    }
};
int main()
{
    Complex c1;
    c1.set(1, 2);
    c1.show();
    int x;
    x = c1; // error // like x = c1.operator int() but not in real it is doing like it.
    cout << "x = " << x;
}
