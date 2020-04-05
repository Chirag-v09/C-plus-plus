#include<iostream>

using namespace std;

class Parent
{
    int a;
    int *p;
public:
    void fun1()
    {
        cout << "Parent Class fun function is here" << endl;
    }
    virtual ~Parent()
    {
        cout << "Parent Destructor" << endl;
    }
};

class Child : public Parent
{
public:
    void fun2()
    {
        cout << "Child class fun function is here" << endl;
    }
    ~Child()
    {
        cout << "Child Destructor" << endl;
    }
};

int main()
{
    Parent *p = new Child;
    p -> fun1();
    delete p;
}
