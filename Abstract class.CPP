// Pure virtual Function

#include<iostream>

using namespace std;

class Person // Abstract Class :- Class containing pure virtual function.
{
public:
    virtual void fun() = 0; // Do Nothing function means no definition which is a Pure Virtual Function
    void f1() // To call this function we inherit this class.
    {
        cout << "Parent f1 function" << endl;
    }
};

class Student : public Person
{
public:
    void fun()
    {
        cout << "Child fun function" << endl;
    }
};

int main()
{
    int b
}
