#include<iostream>

using namespace std;

class A
{
    int a, b;
public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    void show()
    {
        cout << "a = " << a << endl << "b = " << b << endl;
    }
};

class B
{
    int p, q;
public:
    B()
    {
        cout << "B default constructor" << endl;
    }
    B(A a)
    {
        p = a.geta();
        q = a.getb();
    }
    void set(int x, int y)
    {
        p = x;
        q = y;
    }
    void show()
    {
        cout << "p = " << p << endl << "q = " << q << endl;
    }
};

int main()
{
    A a1;
    B b1;
    a1.set(1, 2);
    b1 = a1;
    b1.show();
}
