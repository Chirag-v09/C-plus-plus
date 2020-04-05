#include<iostream>

using namespace std;

namespace myspace
{
    int a;
    int f1();
    class A
    {
    public:
        void fun1();
    };
}

int myspace::f1()
{
    std::cout << "Hello f1" << endl;
}

void myspace::A::fun1()
{

    cout << "Hello fun" << endl;
}

namespace myspace2
{
    using namespace myspace2; // now all the members that were defined in the myspace is also declared in the myspace2.
    int b;
    int f2();
    class B
    {
    public:
        void fun2();
    };
}

using namespace myspace;

int main()
{
    a = 5;
    f1();
    A obj;
    obj.fun1();
    myspace2::b = 10;
}
