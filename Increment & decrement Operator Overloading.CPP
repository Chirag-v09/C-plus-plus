#include<iostream>

using namespace std;

class Chirag
{
    int a;

public:

    Chirag()
    {
        cout << endl << "Constructor" << endl;
    }

    void setdata(int x)
    {
        a = x;
    }

    void showdata()
    {
        cout << a << endl;
    }

    Chirag operator ++( ) // pre increment
    {
        Chirag temp;
        temp.a = ++a;
        cout << "Pre increment" << endl;

        return temp;
    }

    Chirag operator ++(int) // post increment
    {
        Chirag temp;
        temp.a = a++;
        cout << "Post increment" << endl;

        return temp;
    }
};

int main()
{
    Chirag c1;

    c1.setdata(2);
    c1.showdata();

    Chirag c2 = ++c1;
    Chirag c3 = c1++;

    c1.showdata();
    c2.showdata();
    c3.showdata();
}
