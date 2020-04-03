#include<iostream>

using namespace std;

class Chirag
{
    int a, b;
public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << a << endl << b << endl;
    }
    friend Chirag operator - (Chirag X);
};

Chirag operator - (Chirag X)
{
    Chirag temp;
    temp.a = -X.a;
    temp.b = -X.b;

    return temp;
}

int main()
{
    Chirag c1, c2, c3;
    c1.setdata(2, 3);

    c2 = -c1; // c2 = operator - (c1)

    c3 = operator-(c1);

    c2.showdata();
    c3.showdata();
}
