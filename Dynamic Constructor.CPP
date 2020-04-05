#include<iostream>

using namespace std;

class A
{
    int a, b;
    int *p; // as it is dynamically uses and assign the memory address of memory block
    // hence this constructor is dynamic constructor.
public:
    A()
    {
        a = 0;
        b = 0;
        p = new int;
    }

    A(int x, int y, int z)
    {
        a = x;
        b = y;
        p = new int;
        *p = z;;
    }
};

int main()
{
    A a1, a2, a3(1, 2);

}
