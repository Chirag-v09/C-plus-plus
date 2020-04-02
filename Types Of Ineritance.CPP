#include<iostream>

using namespace std;

class A
{
    int a;
};

class AA
{
    int aa;
};

class B : public A // Single Level Inheritance contain (A)
{
    int b;
};

class C : public B // Multi-Level Inheritance contain (B) and though (B) contain (A)
{
    int c
};

class D : public A, public AA // Multiple Inheritance contain both (A) and (AA)
{
    int d;
};

////////////////////////////////
class A1 : public A // this class and below class both were derived from class A. Hence,
{
    int a1;
};

class A2 : public A // Hierarchical Inheritance
{
    int a2;
};
////////////////////////////////

int main()
{
    B b;
}
