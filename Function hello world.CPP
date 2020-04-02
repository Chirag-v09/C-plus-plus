#include<iostream>

using namespace std;

void add(int, int b = 1);

void sub(int a, int b = 1)
{
    cout << "Subtraction with 1 :- " << a-b << endl;
}

int main()
{

    int a, b;

    cout << endl << "Enter a Number :- ";
    cin >> a ;

    cout << endl;
    add(a);
    sub(a);

    return 0;
}

void add(int a, int b)
{
    cout << "Addition with 1 :- " << a+b << endl;
}

