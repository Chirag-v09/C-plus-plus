#include<iostream>

using namespace std;

class Chirag
{
    int a, b;

public:

    Chirag(int x, int y) // parametrized constructor
    {
        b = y;
        a = x;
        cout << "Constructor 1" << endl;
    }

    Chirag(int z) // parametrized constructor
    {
        a = z;
        cout << "Constructor 2" << endl;
    }

    Chirag()
    {
        cout << "Constructor 3" << endl;
        a = 10;
    }
/*
    Chirag(Chirag &c) // This is copy constructor here we can't specify Chirag c because as this time we are passing value of a
    {                 // class to this object and hence this Chirag c will call constructor Chirag(Chirag &c) and hence when we
        a = c.a;      // passing value into it then it will call this Chirag(Chirag &c) constructor again and hence go into the
        b = c.a;      // loop so we make reference so that it doesn't mean that we are passing value of one object to another
    }                 // object, Here Chirag(Chirag &c) we are making another name of the actual parameter object and hence no
                      // other constructor will call. */
    void show()
    {
        cout << endl << a << endl << b << endl;
    }

    void show1()
    {
        cout << endl << a ;
    }
};

int main()
{
    Chirag c(2, 3), c2(5), c3, cc(5, 2);

    Chirag c4 = Chirag();

    Chirag c5 = Chirag(7);
    Chirag c6 = 9, c7 = 10;

    Chirag c8 = c; // Here in both cases copy constructor will call and if copy constructor isn't made in class then the compiler will make it own it's own
    Chirag c9(cc);
    c9.show();

    c.show();
}
