
#include<iostream>

using namespace std;

class Chirag
{
    int a, b;

public:

    Chirag()
    {
        cout << endl << "Hello World" << endl;
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

    Chirag operator -()
    {
        Chirag temp;
        temp.a = -a;
        temp.b = -b;

        return temp;
    }
};

int main()
{
    Chirag c1, c2, c3;

    c1.setdata(2, 3);

    c2 = c1.operator-();
    c3 = -c1;
    c2.showdata();
    c3.showdata();
}
