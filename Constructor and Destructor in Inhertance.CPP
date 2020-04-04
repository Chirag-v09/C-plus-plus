#include<iostream>

using namespace std;

class Parent
{
    int a;
public:

    Parent(int z)
    {
        a = z;
        cout << "Parent Class" << endl << a << endl;
    }

    ~Parent()
    {
        cout << "Parent Destructor" << endl;
    }
};

class Child : public Parent
{
    int b;
public:

    Child(int x, int y) : Parent(x) // Child() : Parent() // Child() : Parent(5) //
    {
        b = y;
        cout << "Child Class " << endl << b << endl;
    }

    ~Child()
    {
        cout << "Child Destructor" << endl;
    }
};

int main()
{
    Child c(1, 2); // execute first parent and then child.
}
