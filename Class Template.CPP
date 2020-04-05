#include<iostream>

using namespace std;

template <class X> class Num
{
    X a, b;
public:

    Num(X a, X b)
    {
        this->a = a;
        this->b = b;
    }

    void show()
    {
       cout << "A :- " << a << endl <<"B :- " << b << endl;
    }
};

int main()
{
    Num <float>n(1.5, 2.1);
    n.show();
}
