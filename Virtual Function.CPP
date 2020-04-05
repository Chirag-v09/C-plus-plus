#include<iostream>

using namespace std;

class Parent
{
public:
    virtual void f1()
    {
        cout << "Parent f1" << endl;
    }
};

class Child : public Parent
{
public:
    void f1() // function overriding
    {
        cout << "Child f1" << endl;
    }
    void f2(int x)
    {
        cout << "Child f2" << endl;
    }
};
int main()
{
    Parent *p1, *p2, p;
    Child c;
    p1 = &c;
    c.f1(); // child f1
    p1->f1(); // parent f1 but due to virtual child f1 (LB)

    p2 = &p;
    p2->f1(); // (LB)

}
