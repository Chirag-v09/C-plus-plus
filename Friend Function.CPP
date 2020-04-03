#include<iostream>

using namespace std;

class Chirag
{
    int a, b;
public:
    Chirag(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << endl << b << endl;
    }

    friend void fun(Chirag c);
};

void fun(Chirag c)
{
    cout << endl << "Sum :- " << c.a+c.b << endl;
}

int main()
{
    Chirag c(2, 3);
    cout << endl;
    c.show();
    fun(c);
}
