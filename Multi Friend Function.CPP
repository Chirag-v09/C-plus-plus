#include<iostream>

using namespace std;
class B;
class A
{
    int a;
public:
    A(int x)
    {
        a = x;
    }
    void show()
    {
        cout << a << endl;
    }

    friend void fun(A a, B b);
};

class B
{
    int b;
public:
    B(int y)
    {
        b = y;
    }
    void show()
    {
        cout << b << endl;
    }

    friend void fun(A a, B b);
};

void fun(A a, B b)
{
    cout << "Sum :- " << a.a+b.b << endl;
}

int main()
{
    A a(2);
    B b(3);
    fun(a, b);
}
