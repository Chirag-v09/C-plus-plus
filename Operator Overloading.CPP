#include<iostream>

using namespace std;

class Chirag
{
    int a, b;

public:

    Chirag()
    {
        cout << endl << "Hello World" << endl;
        a = 10;
    }

    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void showdata()
    {
        cout << a << endl << b << endl;
    }

    Chirag add(Chirag c)
    {
        Chirag temp;
        temp.a = a + c.a;
        temp.b = b + c.b;

        return temp;
    }
    Chirag operator +(Chirag c)
    {
        Chirag temp;
        temp.a = a + c.a;
        temp.b = b + c.b;

        return temp;
    }
};

int main()
{
    Chirag c1, c2, c3; // here for all 3 c1, c2, c3 constructor will call.

    c1.setdata(2, 3);
    c2.setdata(5, 2);

    c3 = c1.add(c2); // c3 = c1 + c2 Here for c3 constructor will call again.

    Chirag c4 = c1.operator+(c3);
    Chirag c5 = c2 + c3;
}
