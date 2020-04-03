#include<iostream>

using namespace std;

class Chirag
{
    int a;
public:
    Chirag(int x)
    {
        a = x;
    }
    void show()
    {
        cout << a << endl;
    }
};

class rahul
{
    int b;
public:
    rahul(int x)
    {
        b = x;
    }
    friend class Chirag; // Now all function of class Chirag will become friend function of class rahul
    friend void Chirag::show();
};

int main()
{
    Chirag c(2);
    rahul r(3);
    c.show();
}
