#include<iostream>

using namespace std;

void fun()
{
    static int x; // static local variable contain 0 value and initialize at starting of program and destroy when program ends.
    int y; // it contain garbage value and initialize when we call fun function and destroy when function ends.
}

class Account
{
public:
    int balance; // instance member variable ( different for different objects ).
    static float roi; // static member variable / class variable ( share among all objects ).
    void show()
    {
        cout << roi;
    }
    static void setroi(float r) // Static Member function can only access static member variable.
    {
        roi = r;
    }
};

float Account::roi; // through this line roi variable is created and memory is allocated to this static variable otherwise you can'y access roi varable.

int main()
{
    Account::roi = 3; // Can be accessed with class object.
    Account::setroi(3.7f); // use by class name.
    cout << Account::roi << endl; // use y class name.
    Account a;
    a.show();
    a.setroi(2.7); // use by object.
    cout << endl << a.roi; // use by object.
}
