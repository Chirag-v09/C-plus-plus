#include<iostream>

using namespace std;

void add(int *a, int *b, int *res1);

void sub(int *a, int *b, int *res2)
{
    *res2 = *a - *b;
}

int main()
{
    int a, b, res1, res2;

    cout << endl << "Enter two Numbers :- " << endl;
    cin >> a >> b;

    add(&a, &b, &res1);
    sub(&a, &b, &res2);

    cout << "Addition :- " << res1 << endl;
    cout << "Subtraction :- " << res2 << endl;

    return 0;
}

void add(int *a, int *b, int *res1)
{
    *res1 = *a + *b;
}

