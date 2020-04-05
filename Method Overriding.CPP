#include<iostream>

using namespace std;

class Parent
{
public:

    void fun() // method overriding
    {
        cout << "Parent fun function" << endl;
    }

    void hello() // method hidding
    {
        cout << "Parent hello function" << endl;
    }
};

class Child : public Parent
{
    int a;
public:

    void fun() // method overriding
    {
        cout << "Child fun function" << endl;
    }

    void hello(int x) // method hidding
    {
        a = x;
        cout << "Child hello function" << endl;
    }
};

int main()
{
    Child c;
    c.fun(); // overriding // binds with the child class function
    // Compiler goes to the child class and see is there any fun() and if it founds then it will bind child class fun() with that object.
    c.hello(5); // No overloading as it shows error or both hello() and hello(int x) in same class
    // the phenomena which is going is method hiding as the parent function is get hidden.

    c.hello(); // Shows error because compiler see the Child class ad there it found the hello(int x) so it binds that function
    // but the arguments doesn't match so it will show error.
}
