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

    friend ostream& operator << (ostream &o, Chirag c);
    friend istream& operator >> (istream &i, Chirag &c);
};

ostream& operator << (ostream &o, Chirag c)
{
    o << endl << c.a << endl << c.b << endl;
}

istream& operator >> (istream &i, Chirag &c)
{
    i >> c.a >> c.b;
}

int main()
{
    Chirag c;
    cin >> c; // operator>>(cin, c);
    cout << c; // operator<<(cout, c);

}
