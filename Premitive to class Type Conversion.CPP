#include<iostream>

using namespace std;

class Chirag // Non-primitive data type
{
    int a, b;
public:
    Chirag()
    {
        cout << "Default Constructor" << endl;
    }
    Chirag(int x)
    {
        a = x;
        b = 0;
    }
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a = " << a << endl << "b = " << b << endl;
    }
};

int main()
{
    int e = 3;
    Chirag c1;
    // like c1.complex(x); but not in real it is doing like it.
    c1 = e; // Now this error is resolved by making a new constructor which takes on parameter.
    // e - primitive data type.
    // c1 - class data type.
    c1.show();
}
