#include<iostream>
//#include<typeinfo>

using namespace std;

class Complex
{
    int c;
};
int main()
{
    int a;
    int *p = new int;
    int *ptr = new int[5];
    cout << "Enter value for the new pointer variable :- ";
    cin >> *p;
    cout << "Value of new pointer variable :- " << *p << endl;
    cout << "Enter Number of array value :- ";
    cin >> a;
    int *ar = new int[a];
    for(int i = 0; i < a; i++)
    {
        *(ar+i) = i;
    }

    for(int i = 0; i < a; i++)
    {
        cout << "value :- " << *(ar+i);
    }

    float *q = new float;

    Complex *c = new Complex;

    delete p;
    delete ptr;
    delete ar;
    delete q;
    delete c;
}
