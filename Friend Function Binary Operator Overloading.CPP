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
    friend Chirag operator + (Chirag X, Chirag Y);
};

Chirag operator + (Chirag X, Chirag Y)
{
    Chirag temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;

    return temp;
}

int main()
{
    Chirag c1, c2, c3, c4, c5;
    c1.setdata(2, 3);
    c2.setdata(5, 2);
    c4.setdata(1, 2);

    c3 = c1+c2; // c3 = operator + (c1, c2)

    c5 = operator+(c1,c4);

    c3.showdata();
    c5.showdata();
}
