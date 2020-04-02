#include<iostream>

using namespace std;

void show(int a, int b)
{
    cout << a << endl << b << endl;
}

void show(int c)
{
    cout << c << endl;
}

int main()
{

    int a, b;
    char c;

    cout << endl << "Enter two Number :- " << endl;
    cin >> a >> b;

    cout << endl << "Enter a character :- ";
    cin >> c ;

    cout << endl;
    show(a, b);
    show(c);

    return 0;
}
