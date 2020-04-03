#include<iostream>

using namespace std;

class Chirag
{
    int a;

public:

    Chirag()
    {
        cout << endl << "Hello World" << endl;
        a = 10;
    }

    void show()
    {
        cout << a << endl;
    }
};

int main()
{
    Chirag c, c2, c3;
    c.show();
}
