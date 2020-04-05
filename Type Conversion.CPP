#include<iostream>

using namespace std;

class Chirag // Non-primitive data type
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
        cout << a << endl << b << endl;
    }
};

int main()
{
    int a = 10; // char float double primitive data type.
    float b;
    b = a; // automatic type conversion
    cout << b << endl;

    float c = 3.4;
    int d;
    d = c; // automatic type conversion
    cout << d << endl;

    int e = 3;
    Chirag c1, c2;
    c1 = e; // error - as compiler own it's own can't convert primitive data type to class data type.
    // e - primitive data type.
    // c1 - class data type.
    int f;
    f = c2; // error
}
