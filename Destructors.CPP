#include<iostream>

using namespace std;

class Chirag
{
    int a, b;

public:

    Chirag()
    {
        cout << endl << "Hello World" << endl;
        a = 10;
    }

    ~Chirag()
    {
        cout << "End" << endl;
    }
};

int main()
{
    Chirag c;
}
